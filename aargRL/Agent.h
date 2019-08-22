#pragma once
#include <string>

#include "GraphicData.h"
#include "Pair.h"
#include "Pool.h"

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
	GraphicData* gdata = nullptr; 
	//agents will reference a single universal instance of a graphicsdata object
	//this is to reduce duplication
	//multiple orc entities will use the same color pair and glyph, for example, no need to duplicate the graphicsdata

	//for tracking position on map
	Pair<int> coord;

	//health
	Pool hp;

	//magicka or mana or spellpower or whatever (TBD)
	Pool mp;

	//metabolism
	Pool stomach;

public:
	Agent();
	~Agent();

	AgentType getType();

	void setGraphicData(GraphicData* dptr);
	GraphicData* getGraphicData();

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

