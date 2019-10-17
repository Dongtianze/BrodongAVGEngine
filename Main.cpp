#include<stdio.h>
#include<graphics.h>
#include"Page.h"
/*
Brodong's AVG engine

	This is an simple AVG engine made with EasyX library in C++;

	1.	Main loop
		{
			Get Page information from document;
			Show background;
			Paint Character(s);
			Paint communication form;
			Paint text;
			Check if mouse click:
				Yes:next page;
				No:keep this page;
		}

	2.	Page oreders
		1)	_SETTEXT (text):set text shown;
		2)	_SETBKGR (background name):set background through name;
		3)	_ADDCHAR (character name) (x) (y):add a character at (x,y);
		4)	_GOTODOC (text name):goto storytext through name;
		5)	_EXITPRG :exit game;
		6)	_SETMUSC (music text):set music through name;
		7)	_SELOPTN (option numbers) (option 1 goto text name) (option 1 selection text) (option 2 goto text name) (option 2 selection text) ......(option n goto text name) (option 2 selcetion text):give choices and goto another text;

	3.	Page struction
	{
	order 1
	order 2
	......
	order n
	}

*/

int main()
{

}
