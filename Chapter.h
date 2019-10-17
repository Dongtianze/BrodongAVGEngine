#pragma once
#include<stdio.h>
#include"Page.h"
class Chapter
{
private:
	char chapterName[1024];
	Page pages[1024];
	int pageCount = 0;
	char order[16]="0";
public:
	FILE* chapterFile;

	void setChapterName(char*);
	
	void getChapterinfo();

	void DisplayChapter();
	
	void RunOrder(char*);
};

