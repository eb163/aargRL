#pragma once
#include "pdcurses/curses.h"

class GraphicData
{
private:
	char glyph;
	int cp;

public:
	GraphicData();
	GraphicData(char ch, int color_pair);
	~GraphicData();

	void setGlyph(char ch);
	char getGlyph();

	void setColorPair(int color_pair);
	int getColorPair();
};

