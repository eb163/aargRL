#pragma once
#include "Agent.h"
class PCAgent : public Agent
{

private:
	//inherited
	//AgentType type

protected:
	//inherited:
	/*
	string name;
	string description;
	GraphicData gdata; 
	Pair<int> coord; 	//for tracking position on map
	Pool hp; //health
	Pool mp; //magicka or mana or spellpower or whatever (TBD)
	Pool stomach; //metabolism
	*/

public:
	PCAgent();
	~PCAgent();

	//inherited:
	/*
	AgentType getType();

	void setGraphicData(char ch, int color);
	GraphicData getGraphicData();

	void setName(string n);
	string getName();

	void setDescr(string d);
	string getDescr();

	Pair<int> getPosition();
	void setPosition(int y, int x);
	void move(int dy, int dx);
	*/
};

