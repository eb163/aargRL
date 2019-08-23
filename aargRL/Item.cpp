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

void Item::setItemType(ItemType t)
{
	itemtype = t;
}

ItemType Item::getItemType()
{
	return itemtype;
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

void Item::setPosition(int y, int x)
{
	coord.y = y;
	coord.x = x;
}

Pair<int> Item::getPosition()
{
	return coord;
}
