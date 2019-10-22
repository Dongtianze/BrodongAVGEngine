# BrodongAVGEngine
## Introduction
This is a Adventure Game(AVG) Engine made with [EasyX](https://easyx.cn/). [I](https://github.com/Dongtianze)'m using Visual Studio 2019 Community version to develop it.
## Classes
### Page
#### Variables
##### Private
char backGroundImage[1024]="0": This string saves the path of this Page's background.  
char shownText[1024]="0": This string saves the lines to print on this page.
#### Functions
void setBackgroundImage(char* fileName): Set the page's backGroundImage as "Data/Backgrounds/[filename]"  
void setShownText(char* getText): Set the page's shownText as "[getText]"  
void DisplayPage(): Display this page until mouse left button click;  
char* getBackgroundImage(): Get this page's backGroundImage
### Chapter
####
