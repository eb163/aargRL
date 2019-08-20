#pragma once

#include "GraphicData.h"
#include "Pair.h"

enum TileType {FLOOR = 0, WALL = 1, DOOR = 2, WATER = 3, LAVA = 4};

class Tile
{
private:
	TileType type;
	GraphicData* gdata = nullptr;

	Pair<int> coord;

	//will need an inventory for items

protected:
	bool passable;
	bool transparent;

public:
	Tile();
	~Tile();

	TileType getType();
	void setType(TileType t);

	void setGraphicData(GraphicData* dptr);
	GraphicData* getGraphicData();

	bool isPassable();
	//bool isBlocked();		//TBD
	bool isTransparent();

	void setCoordinates(int y, int x);
	Pair<int> getCoordinates();
};

