#include "Page.h"
#include<string.h>
#include<graphics.h>
#define WINDOW_HEIGHT 480
#define WINDOW_WIDTH 640

void Page::setBackgroundImage(char* fileName)
{
	char filePlace[1024] = "Data/Backgrounds/";
	strcat_s(filePlace, 1024, fileName);
	strcpy_s(this->backgroundImage, 1024, filePlace);
}

void Page::setShownText(char* getText)
{
	strcpy_s(this->shownText, 1024, getText);
}

void Page::DisplayPage()
{
	while (1)
	{
		BeginBatchDraw();
		if (backgroundImage != "0")
		{
			IMAGE* IMGPTR=NULL;
			loadimage(IMGPTR, this->backgroundImage, WINDOW_WIDTH, WINDOW_HEIGHT, true);
		}
		if (shownText != "0")
		{
			setlinestyle(PS_SOLID, 32);
			rectangle(0, WINDOW_HEIGHT * 2 / 3, WINDOW_WIDTH, WINDOW_HEIGHT);
			settextstyle(16, 8, "consola.ttf");
			outtextxy(32, WINDOW_HEIGHT * 2 / 3 + 32, this->shownText);
		}
		EndBatchDraw();

		if (MouseHit())
		{	
			MOUSEMSG getMsg;
			getMsg = GetMouseMsg();
			if (getMsg.uMsg == WM_LBUTTONUP)
				break;
		}
		cleardevice();
	}
	cleardevice();
}

char* Page::getBackgroundImage()
{
	return this->backgroundImage;
}