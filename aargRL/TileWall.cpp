#include "TileWall.h"

TileWall::TileWall()
{
	setType(TileType::WALL);
	setGraphicData(new GraphicData('#', COLOR_WHITE));
	passable = false;
	transparent = false;
}


TileWall::~TileWall()
{

}
