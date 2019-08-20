#include "TileFloor.h"

TileFloor::TileFloor()
{
	setType(TileType::FLOOR);
	setGraphicData(new GraphicData('-', COLOR_WHITE));
	passable = true;
	transparent = true;
}


TileFloor::~TileFloor()
{

}
