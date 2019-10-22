#pragma once
#include<stdio.h>
#include"Page.h"
class Chapter
{
private:
	char chapterName[512];
	Page pages[128];
	int pageCount = 0;
	char order[16]="0";
public:
	FILE* chapterFile;

	void setChapterName(char*);
	
	void getChapterinfo();

	void DisplayChapter();
	
	void RunOrder(char*);
};

