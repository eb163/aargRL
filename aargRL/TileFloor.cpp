#include "TileFloor.h"

TileFloor::TileFloor()
{
	setType(TileType::FLOOR);
	setGraphicData('-', COLOR_WHITE);
	passable = true;
	transparent = true;
}


TileFloor::~TileFloor()
{

}
