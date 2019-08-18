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

	string ngstr = "Start a new game!";
	string lgstr = "Load a game!";
	string optstr = "Options";
	string quitstr = "Quit";

	WINDOW* mainMenuWin = newwin(DEF_SCR_BOUNDS_Y, DEF_SCR_BOUNDS_X, 0, 0);

	int titleX = (DEF_SCR_BOUNDS_X - title.length()) / 2;
	int titleY = (DEF_SCR_BOUNDS_Y / 2);

	int ngstrX = (DEF_SCR_BOUNDS_X - ngstr.length()) / 2;
	int ngstrY = titleY + 2;

	int lgstrX = (DEF_SCR_BOUNDS_X - lgstr.length()) / 2;
	int lgstrY = ngstrY + 1;

	int optstrX = (DEF_SCR_BOUNDS_X - optstr.length()) / 2;
	int optstrY = lgstrY + 1;

	int quitstrX = (DEF_SCR_BOUNDS_X - quitstr.length()) / 2;
	int quitstrY = optstrY + 1;

	while (running)
	{
		//draw contents to screen
		wclear(mainMenuWin);
		curs_set(0); //hide the cursor on the main menu

		mvwaddstr(mainMenuWin, titleY, titleX, title.c_str());
		mvwaddstr(mainMenuWin, ngstrY, ngstrX, ngstr.c_str());
		mvwaddstr(mainMenuWin, lgstrY, lgstrX, lgstr.c_str());
		mvwaddstr(mainMenuWin, optstrY, optstrX, optstr.c_str());
		mvwaddstr(mainMenuWin, quitstrY, quitstrX, quitstr.c_str());

		wrefresh(mainMenuWin);
		overwrite(mainMenuWin, stdscr);
		refresh();

		getch();
	}

	return 0;
}