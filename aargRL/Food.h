#pragma once
#include "Consumable.h"

enum FoodType {BREAD = 0, MEAT = 1, ELFBREAD = 2, DWARFBREAD = 3};

class Food : public Consumable
{
private:
	int nutrition; //when consumed, nutrition value is added to consumer's metabolism


protected:
	/*
	//inherited
	void setItemType(ItemType t);

	void setConsumableType(ConsumableType t);

	string name;
	string description;

	GraphicData gdata;

	Pair<int> coord;
	//for tracking position on map

	int weight;

	*/

public:
	Food();
	~Food();

	static const int totalFoodTypes = 4;

	int getNutrition();
	void setNutrition(int n);

	void makeFood(FoodType type);

	void randomize(); //used when generating a new unspecific food object, or transmogrifying an existing food object

	/*
	//inherited
	
	ItemType getItemType();

	ConsumableType getConsumableType();

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
	*/
};

