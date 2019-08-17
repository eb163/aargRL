#include "GraphicData.h"



GraphicData::GraphicData()
{
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
