#pragma once
#include <string>

#include "GraphicData.h"
#include "Pair.h"

using std::string;

enum ItemType {};

class Item
{
private:
	ItemType type;

protected:
	string name;
	string description;

	GraphicData* gdata = nullptr;

	Pair<int> coord;
	//for tracking position on map

public:
	Item();
	~Item();

	void setType(ItemType t);
	ItemType getType();

	void setGraphicData(GraphicData* dptr);
	GraphicData* getGraphicData();

	void setName(string n);
	string getName();

	void setDescr(string d);
	string getDescr();

};

