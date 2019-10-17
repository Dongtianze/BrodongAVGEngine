#include<stdio.h>
#include<graphics.h>
#include"Page.h"
#include"Chapter.h"

#define WINDOW_WIDTH 480
#define WINDOW_HEIGHT 640
/*
Brodong's AVG engine

	This is an simple AVG engine made with EasyX library in C++;

	1.	Main loop
		{
			Get chapter info;
			Show pages in the chapter in order;
			Do the Chapter order;
		}

	2.	Page
		A Page includes something to show;

	3.	Page struction
		order 1
		order 2
		......
		order n
		_ENDPAGE

	4.	Page orders
		1)	_SETTEXT (text) :set text shown;
		2)	_SETBKGR (background name) :set background through name;
		3)	_ADDCHAR (character name) (x) (y) :add a character at (x,y);
		4)	_SETMUSC (music text) :set music through name;

	
	5.	Chapter
		a Chapter includes some Pages
	
	6.	Chapter struction
	Page 1
	Page 2
	......
	Page n
	order

	7.	Chapter orders
		1)	_ENDGAME :Exit the game;
		2)	_OPTIONS (option 1 text) (option 1 goto chapter) (option 2 text) (option 2 goto chapter) ......(option n text) (option n goto chapter) : give few options and goto selected chapter;
		3)	_GOTOCHP (chapter name) : goto the chapter through name;
*/
char indexChapterName[1024] = "Data/Chapters/index.txt";
char resultString[1024] = "END";
int main()
{
	
	initgraph(WINDOW_WIDTH, WINDOW_HEIGHT);
	Chapter nowChapter;
	
	nowChapter.setChapterName(indexChapterName);
	while (1)
	{
		nowChapter.getChapterinfo();
		nowChapter.DisplayChapter();
		
		nowChapter.RunOrder(resultString);
		if (resultString == "_ENDGAME")
			break;
		else 
			nowChapter.setChapterName(resultString);
	}
	closegraph();
	return 0;
}
