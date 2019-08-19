#pragma once
#include <string>

#include "GraphicData.h"
#include "Pair.h"

using std::string;

enum AgentType {};

class Agent
{
private:
	AgentType type;

protected:
	string name;
	string description;
	GraphicData* gdata = nullptr; 
	//agents will reference a single universal instance of a graphicsdata object
	//this is to reduce duplication
	//multiple orc entities will use the same color pair and glyph, for example, no need to duplicate the graphicsdata

	Pair<int> coord;
	//for tracking position on map

public:
	Agent();
	~Agent();

	void setType(AgentType t);
	AgentType getType();

	void setName(string n);
	string getName();

	void setDescr(string d);
	string getDescr();
};

