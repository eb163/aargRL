#pragma once
#include <string>
#include <vector>
#include <ctime>
#include "PCAgent.h"
//a class for containing and managing data for the main game loop, including PCAgent, Map data, Item data time and turn data, NPCAgents and EnemyAgents

using std::string;

class GameData
{
private:
	int turnCount;
	time_t totalTime;
	time_t rngSeed;

	//pc
	PCAgent* pcptr;

	//Map

	//Items

	//NPCs

	//Enemies


protected:

public:
	GameData();
	~GameData();

	void setTurnCount(int t);
	void modifyTurnCount(int dt);
	int getTurnCount();

	void setTotalTime(time_t time);
	time_t getTotalTime();
	string getTotalTimeStr();

	void setRNGSeed(time_t time);
	time_t getRNGSeed();

	void setPC(PCAgent* ptr);
	PCAgent* getPC();

	//save method: writes data from GameData to a binary file

	//load method: loads data from a binary file into the calling GameData instance, overwriting any existing data in the instance
};

