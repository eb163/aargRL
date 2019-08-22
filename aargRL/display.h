#pragma once
#include <vector>
#include "pdcurses/curses.h"
#include "pdcurses/curseutil.h"
#include "Pair.h"
#include "GraphicData.h"
#include "Map.h"
#include "PCAgent.h"

//writes to the passed curses window the graphics of the tiles of the passed map pointer
void drawmap(WINDOW* scr, Map* map)
{
	noecho();
	curs_set(0);
	//precondition: map size is equal to or smaller than window size
	int mapsize = map->getTotalTiles();
	int rows = map->getBounds().y;
	int columns = map->getBounds().x;

	for (int y = 0; y < rows; ++y)
	{
		for (int x = 0; x < columns; ++x)
		{
			char ch = map->getTile(y, x).getGraphicData().getGlyph();
			int color = map->getTile(y, x).getGraphicData().getColorPair();
			mvwprintcolorch(scr, y, x, ch, color);
		}
	}
	wrefresh(scr);
}

//drawing agents and items to scr requires knowing what region of the map is currently displayed on screen
//currently assuming the whole map is the size of the region of the dusplay dedicated to displaying the map
void drawagents(WINDOW* scr, vector<Agent*> agents)
{
	if (agents.empty() == false)
	{
		int size = agents.size();
		for (int i = 0; i < size; ++i)
		{
			Pair<int> coord = agents.at(i)->getPosition();
			GraphicData gd = agents.at(i)->getGraphicData();
			mvwprintcolorch(scr, coord.y, coord.x, gd.getGlyph(), gd.getColorPair());
		}
	}
}

void drawitems(WINDOW* scr, vector<Item*> items)
{
	if (items.empty() == false)
	{
		int size = items.size();
		for (int i = 0; i < size; ++i)
		{
			Pair<int> coord = items.at(i)->getPosition();
			GraphicData gd = items.at(i)->getGraphicData();
			mvwprintcolorch(scr, coord.y, coord.x, gd.getGlyph(), gd.getColorPair());
		}
	}
}

//writes to the passed curses window the data of the passed PCAgent
void drawhud(WINDOW* scr, PCAgent* pc)
{
	noecho();
	curs_set(0);
	wclear(scr);
	//pc data to display
	//name
	string namestr = pc->getName();
	mvwaddstr(scr, 1, 1, namestr.c_str());

	//class level (TBD)

	//hp
	string hpstr = "HP: ";
	hpstr += to_string(pc->getHP().getCurrent());
	hpstr += " / ";
	hpstr += to_string(pc->getHP().getMax());

	mvwaddstr(scr, 2, 1, hpstr.c_str());

	//mp (TBD)
	//exp (TBD)
	//status bar (TBD)

	wrefresh(scr);
}