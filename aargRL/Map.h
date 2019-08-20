#pragma once

#include <string>
#include <exception>

#include "Pair.h"
#include "Tile.h"
#include "TileFloor.h"
#include "TileWall.h"

using std::string;

class Map
{
private:
	Pair<int> bounds;
	Tile** tiles = nullptr;

protected:

public:
	Map();
	Map(int yBounds, int xBounds);
	~Map();

	int getTotalTiles();
	Pair<int> getBounds();

	Tile& getTile(int y, int x);

	//void load();
	//void save();
	void generate(); //generate a new random map
};

