#pragma once
#include <string>

#include "GraphicData.h"
#include "CoordinatePair.h"

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

	CoordinatePair<int> coord;
	//for tracking position on map

public:
	Item();
	~Item();

	void setType(ItemType t);
	ItemType getType();

	void setName(string n);
	string getName();

	void setDescr(string d);
	string getDescr();

};

