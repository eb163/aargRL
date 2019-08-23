#include "Food.h"

Food::Food()
{
	setItemType(ItemType::CONSUMABLE);
	setConsumableType(ConsumableType::FOOD);
	randomize();
}

Food::~Food()
{
}

int Food::getNutrition()
{
	return nutrition;
}

void Food::setNutrition(int n)
{
	nutrition = n;
}

void Food::randomize()
{
	int num = rand() % totalFoodTypes;

	switch (num)
	{
	case BREAD:
		setName("hardtack");
		setDescr("A type of simple long lasting bread made by mixing 2 parts flour, one part water, and salt, and baking until hard and dry.");
		setNutrition(100); //arbitrary for now
		setGraphicData('%', COLOR_YELLOW);
		break;
	case MEAT:
		setName("dried meat");
		setDescr("A piece of meat that's been dried and salted.");
		setNutrition(200); //arbitrary for now
		setGraphicData('%', COLOR_RED);
		break;
	case ELFBREAD:
		setName("elven wafer");
		setDescr("A traditional traveling ration made by the elves. These wafers are prized for their light weight and high nutritional content.");
		setNutrition(400); //arbitrary for now
		setGraphicData('%', COLOR_WHITE);
	case DWARFBREAD:
		setName("dwarven biscuit");
		setDescr("A traditional traveling ration made by the dwarves. These biscuits have a tough crunchy crust, light fluffy interior, and a faint taste of fine dwarven beer.");
		setNutrition(200);
		setGraphicData('%', COLOR_YELLOW);
		break;
	}
}
