#pragma once
#include "pdcurses/curses.h"
#include "Pair.h"

class Settings
{
private:
	Pair<int> windowSize;

	//text scroll speed

protected:

public:
	Settings();
	~Settings();

	void init();

	void setWindowSize(int y, int x);
	Pair<int> getWindowSize();

	//void save(); //save settings data to a file
	//void load(); //load settings data from a file into the calling Settings instance
};

