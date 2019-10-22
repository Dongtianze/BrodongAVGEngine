# BrodongAVGEngine
## Introduction
This is a Adventure Game(AVG) Engine made with [EasyX](https://easyx.cn/). [I](https://github.com/Dongtianze)'m using Visual Studio 2019 Community version to develop it.
## Classes
### Character(Not done)
#### Variables
##### Private
char characterImage[1024]="0": The path of this character's image.  
float x=0: The x position of this character.  
float y=0: The y position of this character.  
#### Functions
void setCharacter(char* characterName, float x, float y): Set character's characterImage as "Data/Characters/[characterName]"  and x,y.  
void DisplayCharacter(): Show characterImage at (x,y).
### Page
#### Variables
##### Private
char backGroundImage[1024]="0": The path of this Page's background.  
char shownText[1024]="0": The lines to print on this page.
Character characters[8]: The Characters to show in this page.(Not done)  
short characterCount: The number of Characters.(Not done)
#### Functions
void setBackgroundImage(char* fileName): Set the page's backGroundImage as "Data/Backgrounds/[filename]".  
void setShownText(char* getText): Set the page's shownText as "[getText]".  
void addCharacter(char* characterName, float x, float y): Add a character in characters.(Not done)  
void DisplayPage(): Display this page until mouse left button click.  
char* getBackgroundImage(): Get this page's backGroundImage. (Haven't tested, perhaps with trouble)
### Chapter
#### Variables
##### Private
char chapterName[512]: The Chapter's text's name.  
Page pages[128]: The Pages of this chapter.  
int pageCount = 0: The number of pages in this chapter.  
char order[16]="0": The operation after this chapter was shown. 
##### Public
FILE* chapterFile: File stream of this chapter.  
#### Functions
void setChapterName(char* name): Set this chapter's chapterName as [name].  
void getChapterinfo(): Read the file of "Data/Chapters/[this->chapterName]" and save them in pages array.(Problem:1.  After fopen_s function chapterFile is incorrect and the function will stuck in a dead loop)  
void DisplayChapter(): Display the pages of this chapter in order.  
void RunOrder(char* result): Operate the order.  
## Struction
### Chapter text struction
Page 1  
Page 2  
......  
Page n  
Chapter	order  
### Page struction
order 1  
order 2  
......  
order n  
_ENDPAGE  
## Orders
### Page orders
_SETTEXT (text): Set text shown.  
_SETBKGR (background name): Set background through name.  
_ADDCHAR (character name) (x) (y): Add a character at (x,y). (Not done)  
_SETMUSC (music text): Set music through name. (Not done)  
### Chapter orders
_ENDGAME: Exit the game.  
_OPTIONS (option 1 text) (option 1 goto chapter) (option 2 text) (option 2 goto chapter) ......(option n text) (option n goto chapter): Give few options and goto selected chapter.(Not done)  
_GOTOCHP (chapter name) : Goto the chapter through name.  
## Postscript
For more information like order in page, please read the description in the front of main.cpp. Thanks.  
