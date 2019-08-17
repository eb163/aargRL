#include "pdcurses/curses.h"
#include "pdcurses/curseutil.h"

#include "tests.h"

int main()
{
	initscr();
	start_color();
	init_def_color_pairs();

	testDefaultColorPairs();

	return 0;
}