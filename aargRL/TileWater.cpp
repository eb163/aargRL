#include "TileWater.h"

TileWater::TileWater()
{
	setType(TileType::WATER);
	setGraphicData('~', COLOR_BLUE);
	setName("water");
	setDescr("A pool of water.");
	passable = true;
	transparent = true;
}


TileWater::~TileWater()
{
}
