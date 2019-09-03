#pragma once

//definition of Input signals and an input parser which takes characters from getch and processes them into signals
enum Input
{
	//INVALID OR UNDEFINED KEY
	UNDEF,

	//SAVE AND QUIT OR QUIT W/O SAVING
	SAVE_AND_Q,
	Q_WO_SAVE,

	//WAIT
	WAIT,

	//MOVEMENT
	MOVE_NORTH,
	MOVE_NORTHEAST,
	MOVE_EAST,
	MOVE_SOUTHEAST,
	MOVE_SOUTH,
	MOVE_SOUTHWEST,
	MOVE_WEST,
	MOVE_NORTHWEST,
	
};


//long term goal of defining different sets of controls, with different key chars mapping to the input signals

Input parseCharToInput(char inputCh)
{
	Input signal = UNDEF;
	//currently defining "default" controls which use numpad for movement
	if (inputCh == 'S')
	{
		signal = SAVE_AND_Q;
	}
	else if (inputCh == 'Q')
	{
		signal = Q_WO_SAVE;
	}
	else if (inputCh == '5')
	{
		signal = WAIT;
	}
	else if (inputCh == '1')
	{
		signal = MOVE_SOUTHWEST;
	}
	else if (inputCh == '2')
	{
		signal = MOVE_SOUTH;
	}
	else if (inputCh == '3')
	{
		signal = MOVE_SOUTHEAST;
	}
	else if (inputCh == '4')
	{
		signal = MOVE_WEST;
	}
	else if (inputCh == '6')
	{
		signal = MOVE_EAST;
	}
	else if (inputCh == '7')
	{
		signal = MOVE_NORTHWEST;
	}
	else if (inputCh == '8')
	{
		signal = MOVE_NORTH;
	}
	else if (inputCh == '9')
	{
		signal = MOVE_NORTHEAST;
	}

	return signal;
}