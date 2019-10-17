#pragma once
class Page
{
private:

	char backgroundImage[1024] = "0";

	char shownText[1024] = "0";

public:

	void setBackgroundImage(char*);

	void setShownText(char*);

	void DisplayPage();

	char* getBackgroundImage();
};

