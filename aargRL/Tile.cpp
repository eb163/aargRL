#include "Tile.h"

Tile::Tile()
{

}


Tile::~Tile()
{

}

TileType Tile::getType()
{
	return type;
}

void Tile::setType(TileType t)
{
	type = t;
}

void Tile::setGraphicData(char ch, int color_pair)
{
	gdata.setGlyph(ch);
	gdata.setColorPair(color_pair);
}

GraphicData Tile::getGraphicData()
{
	return gdata;
}

bool Tile::isPassable()
{
	return passable;
}

bool Tile::isTransparent()
{
	return transparent;
}

void Tile::setCoordinates(int y, int x)
{
	coord.y = y;
	coord.x = x;
}

Pair<int> Tile::getCoordinates()
{
	return coord;
}
