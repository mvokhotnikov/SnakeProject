#include "Fruit.h"



Position Fruit::GetPosition()
{
	return position;
}

void Fruit::Spawn()
{
	int fruitX = rand() % WIDTH;
	int fruitY = rand() % HEIGHT;
	position = Position{ fruitX , fruitY };
}
