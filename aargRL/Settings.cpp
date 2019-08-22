#include "Settings.h"



Settings::Settings()
{
	init();
}


Settings::~Settings()
{
}

void Settings::init()
{
	windowSize.y = stdscr->_maxy;
	windowSize.x = stdscr->_maxx;
}

void Settings::setWindowSize(int y, int x)
{
	windowSize.y = y;
	windowSize.x = x;
}

Pair<int> Settings::getWindowSize()
{
	return windowSize;
}
