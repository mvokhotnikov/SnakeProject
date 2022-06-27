#include <iostream>
#include <cassert>

#include "../Sn/Snake.h"


void sp() {
    Snake sn = Snake();
    sn.Spawn();

    assert(sn.GetPosition().x <= WIDTH);
    assert(sn.GetPosition().y <= HEIGHT);

}

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



