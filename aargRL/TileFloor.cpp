#include "TileFloor.h"

TileFloor::TileFloor()
{
	setType(TileType::FLOOR);
	setGraphicData('-', COLOR_WHITE);
	setName("floor");
	setDescr("A cold stone floor.");
	passable = true;
	transparent = true;
}


TileFloor::~TileFloor()
{

}
