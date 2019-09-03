#pragma once
#include "tests.h"
#include <string>
#include <random>
#include <ctime>

#include "pdcurses/curses.h"
#include "pdcurses/curseutil.h"

#include "Input.h"
#include "GameData.h"
#include "DefaultSettings.h"

//file for containing all functions pertaining to the actual game loop

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

void game()
{
	//initialize gamedata
	GameData gamedata;
	//load pcagent into gamedata
	//generate or load map data
	//generate or load item data
	//generate or load NPCAgents and/or EnemyAgents
	//start game loop
	char inputch = ' ';
	Input input = UNDEF;
	while (gamedata.isRunning())
	{
		wclear(stdscr);
		wrefresh(stdscr);
		//input handling
		inputch = getch();
		input = parseCharToInput(inputch);
		parseInput(input, gamedata);
	}
	//loop runs while the PlayerAgent is alive and the Player does not input commands to Save or Quit
}

/*
void game(GameData gamedata)
{

}
*/