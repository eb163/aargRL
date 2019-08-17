#pragma once

#include <string>
#include <exception>

#include "Tile.h"
#include "CoordinatePair.h"

using std::string;

class Map
{
private:
	CoordinatePair<int> bounds;
	Tile* tiles = nullptr;

protected:

public:
	Map();
	Map(int yBounds, int xBounds);
	~Map();

	int getTotalTiles();

	Tile& getTile(int y, int x);
};

