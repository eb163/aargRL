#pragma once
#include <assert.h>
#include <string>
#include "pdcurses/curses.h"
#include "pdcurses/curseutil.h"

#include "DefaultSettings.h"
#include "display.h"
#include "Map.h"

//various methods for testing code

using std::string;

void testDefaultColorPairs()
{
	//precondition: colors have been initiated
	if (has_colors() == true)
	{
		WINDOW* testwin = newwin(DEF_SCR_BOUNDS_Y, DEF_SCR_BOUNDS_X, 0, 0);

		wclear(testwin);

		string white = "white", blue = "blue", red = "red", yellow = "yellow", green = "green", purple = "purple",
			cyan = "cyan", black = "black";

		mvwprintcolorstr(testwin, 1, 1, white, COLOR_WHITE);
		mvwprintcolorstr(testwin, 2, 1, blue, COLOR_BLUE);
		mvwprintcolorstr(testwin, 3, 1, red, COLOR_RED);
		mvwprintcolorstr(testwin, 4, 1, yellow, COLOR_YELLOW);
		mvwprintcolorstr(testwin, 5, 1, green, COLOR_GREEN);
		mvwprintcolorstr(testwin, 6, 1, purple, COLOR_MAGENTA);
		mvwprintcolorstr(testwin, 7, 1, cyan, COLOR_CYAN);
		mvwprintcolorstr(testwin, 8, 1, black, COLOR_BLACK);

		mvwaddstr(testwin, 10, 1, "Press any key to continue...");
		
		wrefresh(testwin);

		overwrite(testwin, stdscr);

		wrefresh(stdscr);

		getch();
	}
}

void unitTestMap(WINDOW* scr, Map* map)
{
	char input = ' ';
	while (input != 'q' && input != 'Q')
	{
		drawmap(scr, map);
		wrefresh(scr);
		overwrite(scr, stdscr);
		refresh();
		input = getch();
	}
}

void unitTestHud(WINDOW* hudscr, PCAgent* pc)
{
	char input = ' ';
	while (input != 'q' && input != 'Q')
	{
		drawhud(hudscr, pc);
		wrefresh(hudscr);
		overwrite(hudscr, stdscr);
		refresh();
		input = getch();
	}
}