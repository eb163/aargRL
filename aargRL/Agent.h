#pragma once
#include <string>

#include "GraphicData.h"
#include "Pair.h"
#include "Pool.h"
#include "Inventory.h"

using std::string;

enum AgentType {PC = 0, NPC = 1, ENEMY = 2 };

class Agent
{
private:
	AgentType type;

protected:
	void setType(AgentType t);

	string name;
	string description;
	GraphicData gdata; 

	//for tracking position on map
	Pair<int> coord;

	//health
	Pool hp;

	//magicka or mana or spellpower or whatever (TBD)
	Pool mp;

	//metabolism
	Pool stomach;

	//inventory
	Inventory items;

public:
	Agent();
	~Agent();

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

	Pool getHP();

	Pool getMP();

	bool isAlive();
};

