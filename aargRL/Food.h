#pragma once
#include "Consumable.h"

enum FoodType {BREAD = 0, MEAT = 1, ELFBREAD = 2, DWARFBREAD = 3};

class Food : public Consumable
{
private:
	int nutrition; //when consumed, nutrition value is added to consumer's metabolism

protected:

public:
	Food();
	~Food();

	static const int totalFoodTypes = 4;

	int getNutrition();
	void setNutrition(int n);

	void makeFood(FoodType type);

	void randomize(); //used when generating a new unspecific food object, or transmogrifying an existing food object
};

