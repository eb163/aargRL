#include "TileWall.h"

TileWall::TileWall()
{
	setType(TileType::WALL);
	setGraphicData('#', COLOR_WHITE);
	setName("wall");
	setDescr("A cold hard stone wall.");
	passable = false;
	transparent = false;
}


TileWall::~TileWall()
{

}
