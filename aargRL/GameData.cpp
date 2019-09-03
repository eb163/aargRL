#include "GameData.h"

GameData::GameData()
{
	running = true;
	rngSeed = time(0);
	pcptr = nullptr;
	turnCount = 0;
	totalTime = 0;
}


GameData::~GameData()
{

}

bool GameData::isRunning()
{
	return running;
}

void GameData::close()
{
	running = false;
}

void GameData::setTurnCount(int t)
{
	turnCount = t;
}

void GameData::modifyTurnCount(int dt)
{
	turnCount += dt;
}

int GameData::getTurnCount()
{
	return turnCount;
}

void GameData::setTotalTime(time_t time)
{
	totalTime = time;
}

time_t GameData::getTotalTime()
{
	return totalTime;
}

void GameData::setRNGSeed(time_t time)
{
	rngSeed = time;
}

time_t GameData::getRNGSeed()
{
	return rngSeed;
}

void GameData::setPC(PCAgent * ptr)
{
	pcptr = ptr;
}

PCAgent * GameData::getPC()
{
	return pcptr;
}

void GameData::save()
{
	//empty sstub for now
	//TODO
}

void GameData::load()
{
	//empty stub for now
	//TODO
}
