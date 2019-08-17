#pragma once

#include "GraphicData.h"
#include "CoordinatePair.h"

class Tile
{
private:
	GraphicData* gdata = nullptr;
	bool passable = true;
	bool transparent = true;

	CoordinatePair<int> coord;

	//will need an inventory for items

protected:


public:
	Tile();
	~Tile();

	bool isPassable();
	//bool isBlocked();		//TBD
	bool isTransparent();

	void setCoordinates(int y, int x);
	CoordinatePair<int> getCoordinates();
};

