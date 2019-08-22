#pragma once

#include <string>
#include "GraphicData.h"
#include "Pair.h"
#include "Inventory.h"

enum TileType {FLOOR = 0, WALL = 1, DOOR = 2, WATER = 3, LAVA = 4};

using std::string;

class Tile
{
private:

	TileType type;
	GraphicData gdata;
	string name;
	string description;

	Pair<int> coord;

	Inventory items;

protected:
	bool passable;
	bool transparent;

public:
	Tile();
	~Tile();

	TileType getType();
	void setType(TileType t);

	void setGraphicData(char ch, int color_pair);
	GraphicData getGraphicData();

	void setName(string n);
	string getName();
	
	void setDescr(string d);
	string getDescr();

	bool isPassable();
	//bool isBlocked();		//TBD
	bool isTransparent();

	void setCoordinates(int y, int x);
	Pair<int> getCoordinates();
};

