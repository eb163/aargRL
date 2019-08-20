#pragma once

#include "GraphicData.h"
#include "Pair.h"

class Tile
{
private:
	GraphicData* gdata = nullptr;
	bool passable = true;
	bool transparent = true;

	Pair<int> coord;

	//will need an inventory for items

protected:


public:
	Tile();
	~Tile();

	void setGraphicData(GraphicData* dptr);
	GraphicData* getGraphicData();

	bool isPassable();
	//bool isBlocked();		//TBD
	bool isTransparent();

	void setCoordinates(int y, int x);
	Pair<int> getCoordinates();
};

