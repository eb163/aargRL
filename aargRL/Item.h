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

	GraphicData gdata;

	Pair<int> coord;
	//for tracking position on map

	int weight;

public:
	Item();
	~Item();

	void setType(ItemType t);
	ItemType getType();

	void setGraphicData(char ch, int color_pair);
	GraphicData getGraphicData();

	void setName(string n);
	string getName();

	void setDescr(string d);
	string getDescr();

	void setPosition(int y, int x);
	Pair<int> getPosition();

};

