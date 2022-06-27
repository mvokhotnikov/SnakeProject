#pragma once

#include<iostream>
#include<conio.h>
#include<windows.h>
#include "Position.h"
#include "Snake.h"
#include "Fruit.h"
#include "PlayerAi.h"
#include "Score.h"
using namespace std;

/// @brief класс фрукта
class Fruit
{
	Position position;
public:
	/// @brief Метод, чтобы получить позицию пространстве
	/// @return Position позиция
	Position GetPosition();

	/// @brief Метод для создания объекта
	void Spawn();
};
