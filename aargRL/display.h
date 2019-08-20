#pragma once
#include "pdcurses/curses.h"
#include "pdcurses/curseutil.h"
#include "Map.h"

//writes to the passed curses window the graphics of the tiles of the passed map pointer
void drawmap(WINDOW* scr, Map* map)
{
	//precondition: map size is equal to or smaller than window size
	int mapsize = map->getTotalTiles();
	int rows = map->getBounds().y;
	int columns = map->getBounds().x;

	for (int y = 0; y < rows; ++y)
	{
		for (int x = 0; x < columns; ++x)
		{
			char ch = map->getTile(y, x).getGraphicData()->getGlyph();
			int color = map->getTile(y, x).getGraphicData()->getColorPair();
			mvwprintcolorch(scr, y, x, ch, color);
		}
	}
}

//writes to the passed curses window the data of the passed PCAgent
//void drawhud(WINDOW* scr, PCAgent pc)

//drawing agents and items to scr requires knowing what region of the map is currently displayed on screen
//void drawagents

//void drawitems