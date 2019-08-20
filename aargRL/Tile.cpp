#include "Tile.h"

Tile::Tile()
{

}


Tile::~Tile()
{

}

void Tile::setGraphicData(GraphicData * dptr)
{
	gdata = dptr;
}

GraphicData * Tile::getGraphicData()
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
