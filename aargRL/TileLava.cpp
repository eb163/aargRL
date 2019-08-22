#include "TileLava.h"

TileLava::TileLava()
{
	setType(TileType::LAVA);
	setGraphicData('~', COLOR_RED);
	setName("lava");
	setDescr("A hot bubbling pool of lava.");
	passable = false;
	transparent = true;
}


TileLava::~TileLava()
{

}
