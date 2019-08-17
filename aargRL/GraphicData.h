#pragma once
#include "pdcurses/curses.h"

class GraphicData
{
private:
	char glyph;
	//COLOR_PAIR cp;

public:
	GraphicData();
	~GraphicData();

	void setGlyph(char ch);
	char getGlyph();
};

