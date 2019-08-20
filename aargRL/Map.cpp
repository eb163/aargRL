#include "Map.h"

Map::Map()
{
	bounds = { 0, 0 };
	tiles = nullptr;
}

Map::Map(int yBounds, int xBounds)
{
	bounds.y = yBounds;
	bounds.x = xBounds;

	tiles = new (Tile*[bounds.x * bounds.y]);
	for (int i = 0; i < this->getTotalTiles(); ++i)
	{
		tiles[i] = nullptr;
	}
}


Map::~Map()
{
	if (tiles != nullptr)
	{
		for (int i = 0; i < this->getTotalTiles(); ++i)
		{
			if (tiles[i] != nullptr)
			{
				delete tiles[i];
				tiles[i] = nullptr;
			}
		}
		delete tiles;
		tiles = nullptr;
	}
}

int Map::getTotalTiles()
{
	return bounds.y * bounds.x;
}

Pair<int> Map::getBounds()
{
	return bounds;
}

Tile & Map::getTile(int y, int x)
{
	if (tiles != nullptr)
	{
		int index = y*x + x;
		if (index > getTotalTiles())
		{
			string errmsg = "LOGICAL ERROR: Coordinates( " + std::to_string(y) + ", " + std::to_string(x) + ") are out of map bounds!";
			throw std::out_of_range(errmsg);
		}
		return *(tiles[index]);
	}
	else
	{
		string errmsg = "RUNTIME ERROR: Map instance has an uninitialized tile array!";
		throw std::runtime_error(errmsg);
	}
}

void Map::generate()
{
	//placeholder
	//currently generates a big empty plane of floors the size of the map
	for (int i = 0; i < this->getTotalTiles(); ++i)
	{
		tiles[i] = new TileFloor();
	}
}
