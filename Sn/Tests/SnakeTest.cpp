#include <iostream>
#include <cassert>

#include "../Sn/Snake.h"
//#include "../Sn/Main.cpp"
#include "../Sn/Snake.h"



/*void MoveTest() {
	Snake sn =  Snake();
	Position pos = sn.GetPosition();
	sn.Move();
	assert(pos == sn.GetPosition());
}
*/
void ResetTest() {
	Snake sn = Snake();
	sn.Move();
	sn.AddTail();
	sn.Reset();

	assert(sn.GetTailSize() == 0);
}

void Karusha() {
	Snake sn = Snake();
	sn.Move();
	sn.AddTail();
	sn.AddTail();
	sn.AddTail();
	cout << sn.GetTailSize() << endl;
	//assert(sn.GetTailSize() == 0);
}



