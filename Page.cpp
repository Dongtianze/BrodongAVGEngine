#include "Page.h"
#include<string.h>

void Page::setBackgroundImage(char* fileName)
{
	char filePlace[1024] = "Data/Backgrounds";
	strcat(filePlace, fileName);
	strcpy(this->backgroundImage, filePlace);
}
void Page::