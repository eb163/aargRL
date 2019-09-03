#include <string>
#include <random>
#include <ctime>

#include "pdcurses/curses.h"
#include "pdcurses/curseutil.h"

#include "tests.h"
#include "game.h"

void goodbye()
{
	srand(time(0));
	string msg = "Bye!";

	int msgCount = 4;

	//get a random msg
	int num = rand() % msgCount;

	switch (num)
	{
	case 0: msg += " Thanks for playing!"; break;
	case 1: msg += " See you next time!"; break;
	case 2: msg += " Don't be a stranger!"; break;
	case 3: msg += " Come back soon!"; break;
	}
	
	noecho();
	curs_set(1);
	wclear(stdscr);
	mvwaddstr(stdscr, 1, 1, msg.c_str());
	wrefresh(stdscr);
	getch();
}

int main()
{
	initscr();
	start_color();
	init_def_color_pairs();

	////////////////////////
	//TESTS
	///////////////////////

	//testDefaultColorPairs();
	Map map(MAP_SCR_BOUNDS_Y, MAP_SCR_BOUNDS_X);
	map.generate();
	unitTestMap(stdscr, &map);

	vector<Agent*> testagents;
	testagents.push_back(new Agent());
	unitTestDrawAgents(stdscr, testagents);

	vector<Item*> testitems;
	testitems.push_back(new Item());
	unitTestDrawItems(stdscr, testitems);

	WINDOW* hudscr = newwin(HUD_SCR_BOUNDS_Y, HUD_SCR_BOUNDS_X, 0, 0);
	PCAgent pctest;
	unitTestHud(hudscr, &pctest);

	WINDOW* logscr = newwin(HUD_SCR_BOUNDS_Y, HUD_SCR_BOUNDS_X / 2, 0, 0);
	MessageLog log;
	unitTestMsgLog(logscr, &log);

	inputTest(stdscr);

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

	char input = ' '; //for user input

	string ngstr = "[" + string(1, ngchar) + "] : Start a new game!";
	string lgstr = "[" + string(1, lgchar) + "] : Load a game!";
	string optstr = "[" + string(1, optchar) + "] : Options";
	string qstr = "[" + string(1, qchar) + "] : Quit";

	WINDOW* mainMenuWin = newwin(DEF_SCR_BOUNDS_Y, DEF_SCR_BOUNDS_X, 0, 0);

	int titleX = (DEF_SCR_BOUNDS_X / 2); // -title.length()) / 2;
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

		input = getch();

		//parse input
		if (input == ngchar)
		{
			//start a new game
			newgame();
		}

		else if (input == lgchar)
		{
			placeholderMsg();
			//load gamedata from a file to a gamedata obj
			//start game loop with the gamedata
		}

		else if (input == optchar)
		{
			placeholderMsg();
		}

		else if (input == qchar)
		{
			running = false;
			goodbye();
		}
	}

	return 0;
}