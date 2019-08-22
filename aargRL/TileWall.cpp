#include "TileWall.h"

TileWall::TileWall()
{
	setType(TileType::WALL);
	setGraphicData('#', COLOR_WHITE);
	passable = false;
	transparent = false;
}


TileWall::~TileWall()
{

}
