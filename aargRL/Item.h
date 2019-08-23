#pragma once
#include <string>

#include "GraphicData.h"
#include "Pair.h"

using std::string;

enum ItemType {CONSUMABLE = 0};

class Item
{
private:
	ItemType itemtype;

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

	void setItemType(ItemType t);
	ItemType getItemType();

	void setGraphicData(char ch, int color_pair);
	GraphicData getGraphicData();

	void setName(string n);
	string getName();

	void setDescr(string d);
	string getDescr();

	void setPosition(int y, int x);
	Pair<int> getPosition();

	void setWeight(int n);
	int getWeight();

};

