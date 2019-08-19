#include "GraphicData.h"



GraphicData::GraphicData()
{
	setGlyph(' ');
	setColorPair(COLOR_WHITE);
}

GraphicData::GraphicData(char ch, int color_pair)
{
	setGlyph(ch);
	setColorPair(color_pair);
}


GraphicData::~GraphicData()
{
}

void GraphicData::setGlyph(char ch)
{
	glyph = ch;
}

char GraphicData::getGlyph()
{
	return glyph;
}

void GraphicData::setColorPair(int color_pair)
{
	cp = color_pair;
}

int GraphicData::getColorPair()
{
	return cp;
}
