#include "Item.h"

Item::Item()
{
	name = "Abstract Item";
	description = "An undefined abstract item entity. You should not be seeing this description.";
	gdata.setGlyph('i');
	gdata.setColorPair(COLOR_WHITE);
	coord = { 0, 0 };
	weight = 0;
}


Item::~Item()
{

}

void Item::setType(ItemType t)
{
	type = t;
}

ItemType Item::getType()
{
	return type;
}

void Item::setGraphicData(char ch, int color_pair)
{
	gdata.setGlyph(ch);
	gdata.setColorPair(color_pair);
}

GraphicData Item::getGraphicData()
{
	return gdata;
}

void Item::setName(string n)
{
	name = n;
}

string Item::getName()
{
	return name;
}

void Item::setDescr(string d)
{
	description = d;
}

string Item::getDescr()
{
	return description;
}
