#pragma once
class Page
{
private:

	char backgroundImage[1024] = "0";

	char targetDocument[1024] = "0";

	char shownText[1024] = "0";

public:

	void setBackgroundImage(char*);
	void getBackgroundImage(char*, char*);

	void setTargetDocument(char*);
	void getTargetDocument(char*, char*);

	void setShownText(char*);
	void getShownText(char*, char*);


};

