#include "pdcurses/curses.h"
#include "pdcurses/curseutil.h"

#include "DefaultSettings.h"
#include "tests.h"

int main()
{
	initscr();
	start_color();
	init_def_color_pairs();

	////////////////////////
	//TESTS
	///////////////////////

	testDefaultColorPairs();

	///////////////////////
	//MAIN MENU
	//////////////////////

	bool running = true;

	string title = "Aarg, a roguelike!";

	//input options
	char ngchar = 'n';
	char lgchar = 'l';
	char optchar = 'o';
	char qchar = 'q';

	string ngstr = "[" + string(1, ngchar) + "] : Start a new game!";
	string lgstr = "[" + string(1, lgchar) + "] : Load a game!";
	string optstr = "[" + string(1, optchar) + "] : Options";
	string qstr = "[" + string(1, qchar) + "] : Quit";

	WINDOW* mainMenuWin = newwin(DEF_SCR_BOUNDS_Y, DEF_SCR_BOUNDS_X, 0, 0);

	int titleX = (DEF_SCR_BOUNDS_X / 2); //- title.length()) / 2;
	int titleY = (DEF_SCR_BOUNDS_Y / 2);

	int ngstrX = (DEF_SCR_BOUNDS_X / 2); //- ngstr.length()) / 2;
	int ngstrY = titleY + 2;

	int lgstrX = (DEF_SCR_BOUNDS_X / 2); //- lgstr.length()) / 2;
	int lgstrY = ngstrY + 1;

	int optstrX = (DEF_SCR_BOUNDS_X / 2); //- optstr.length()) / 2;
	int optstrY = lgstrY + 1;

	int qstrX = (DEF_SCR_BOUNDS_X / 2); //- qstr.length()) / 2;
	int qstrY = optstrY + 1;

	while (running)
	{
		//draw contents to screen
		wclear(mainMenuWin);
		curs_set(0); //hide the cursor on the main menu

		mvwaddstr(mainMenuWin, titleY, titleX, title.c_str());
		mvwaddstr(mainMenuWin, ngstrY, ngstrX, ngstr.c_str());
		mvwaddstr(mainMenuWin, lgstrY, lgstrX, lgstr.c_str());
		mvwaddstr(mainMenuWin, optstrY, optstrX, optstr.c_str());
		mvwaddstr(mainMenuWin, qstrY, qstrX, qstr.c_str());

		wrefresh(mainMenuWin);
		overwrite(mainMenuWin, stdscr);
		refresh();

		getch();
	}

	return 0;
}