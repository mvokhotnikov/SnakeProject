#include <iostream>

#include "../Sn/Snake.h"
#include "../Sn/Main.cpp"
#include "../Sn/Snake.h"
#include "../Sn/PlayerAi.h"
#include "../Sn/Fruit.h"


void AiTest() {
	Snake sn = Snake();
	Fruit fruit = Fruit();
	PlayerAi ai(sn, fruit);

	int count = 0;

	Position fruitPos = fruit.GetPosition();

	bool succes = false;
	while (1) {
		ai.ControlMovement();
		count++;

		if (count > 100)
		{
			break;
		}
			
		if (fruit.GetPosition() != fruitPos)
		{
			succes = true;
			break;
		}

	}
	
	assert(succes, true);
}
