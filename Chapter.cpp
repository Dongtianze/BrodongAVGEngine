#include "Chapter.h"
#include "Page.h"
#include <stdio.h>
#include <string.h>

void Chapter::setChapterName(char* name)
{
	this->pageCount = 0;
	strcpy_s(this->chapterName, 512, name);
}

void Chapter::getChapterinfo()
{
	char filePlace[512] = "Data/Chapters/";
	strcat_s(filePlace, 512, this->chapterName);
	fopen_s(&(this->chapterFile), filePlace, "r");
	char order[16] = "0";
	//if(this->chapterFile!=NULL)
	//fseek(this->chapterFile, 0, SEEK_SET);
	while (this->chapterFile != NULL )
	{
		fscanf_s(this->chapterFile, "%s", order, 16);
		if (order == "_SETTEXT")
		{
			char getString[1024];
			fgets(getString, 1024, this->chapterFile);
			this->pages[this->pageCount].setShownText(getString);
		}
		else if (order == "_SETBKGR")
		{
			char getString[1024];
			fgets(getString, 1024, this->chapterFile);
			this->pages[this->pageCount].setBackgroundImage(getString);
		}
		else if (order == "_ENDGAME"||order=="_OPTIONS"||order=="GOTOCHP")
		{
			strcpy_s(this->order, 1024, order);
			break;
		}
		else if (order == "_ENDPAGE")
		{
			if (strcmp(this->pages[this->pageCount].getBackgroundImage(), "0") == 0 && this->pageCount != 0)
				strcpy_s(this->pages[this->pageCount].getBackgroundImage(), 1024, this->pages[this->pageCount - 1].getBackgroundImage());
			this->pageCount += 1;
		}
	}
}

void Chapter::DisplayChapter()
{
	for (int page = 0; page < this->pageCount; page += 1)
		this->pages[page].DisplayPage();
}

void Chapter::RunOrder(char* result)
{
	if (this->order == "_GOTOCHP")
	{
		char fileName[1024];
		char filePlace[1024] = "Data/Chapters/";
		fscanf_s(this->chapterFile, "%s", fileName, 1024);
		strcat_s(filePlace, 1024, fileName);
		strcpy_s(result, 1024, filePlace);
	}
	else if (this->order == "_ENDGAME")
	{
		fclose(this->chapterFile);
		strcpy_s(result, 1024, "_ENDGAME");
	}
		

}