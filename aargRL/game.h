#pragma once
#include "tests.h"
#include <string>
#include <random>
#include <ctime>

#include "pdcurses/curses.h"
#include "pdcurses/curseutil.h"

#include "display.h"
#include "Input.h"
#include "GameData.h"
#include "DefaultSettings.h"
//file for containing all functions pertaining to the actual game loop

PCAgent* createNewPC(WINDOW* scr)
{
	//skipping menu process for now, just creating a default PCAgent at location (0,0)
	PCAgent* pc = new PCAgent();
	pc->setPosition(0, 0);

	return pc;
}

void drawgame(GameData gd)
{
	//draws game to stdscr using display subroutines

	//draw map

	//draw items

	//draw agents

	//draw the hud

	//draw any messages

	//draw the pc
	drawpc(stdscr, gd.getPC());

	//overlay everything to stdscr (only if not using a single curses window)

}

//method for operating on game world after raw char keys have been processed into Input signals
void parseInput(Input signal, GameData& game)
{
	if (signal == Input::UNDEF)
	{
		//do nothing
	}
	else if (signal == Input::SAVE_AND_Q)
	{
		game.save();
		game.close();
	}
	else if (signal == Input::Q_WO_SAVE)
	{
		//should have message prompt verifying user is sure of this
		game.close();
	}
	else if (signal == Input::MOVE_NORTH)
	{
		placeholderMsg(); //TODO
	}
	else if (signal == Input::MOVE_NORTHEAST)
	{
		placeholderMsg(); //TODO
	}
	else if (signal == Input::MOVE_EAST)
	{
		placeholderMsg(); //TODO
	}
	else if (signal == Input::MOVE_SOUTHEAST)
	{
		placeholderMsg(); //TODO
	}
	else if (signal == Input::MOVE_SOUTH)
	{
		placeholderMsg(); //TODO
	}
	else if (signal == Input::MOVE_SOUTHWEST)
	{
		placeholderMsg(); //TODO
	}
	else if (signal == Input::MOVE_WEST)
	{
		placeholderMsg(); //TODO
	}
	else if (signal == Input::MOVE_NORTHWEST)
	{
		placeholderMsg(); //TODO
	}
	else if (signal == Input::WAIT)
	{
		placeholderMsg(); //TODO
	}
}

void game(GameData gamedata)
{
	//start game loop using passed gamedata
	char inputch = ' ';
	Input input = UNDEF;
	while (gamedata.isRunning())
	{
		//graphics
		wclear(stdscr);
		drawgame(gamedata);
		wrefresh(stdscr);
		//input handling
		inputch = getch();
		input = parseCharToInput(inputch);
		parseInput(input, gamedata);
	}
	//loop runs while the PlayerAgent is alive and the Player does not input commands to Save or Quit
}

void newgame()
{
	//initialize gamedata
	GameData gamedata;

	//create a new character
	gamedata.setPC(createNewPC(stdscr));

	//initialize the map, items, agents, etc

	//start game loop
	game(gamedata);
}