#pragma once


#include "Main.h"

class Snake;
class Fruit;

/// @brief класс бота, чтобы играть за игрока
class PlayerAi
{
	Snake * player;
	Fruit * fruit;
public:
	/// @brief конструктор
	/// @param Snake & указаатель на змейку
	/// @param Fruit & указаатель на фрукт
	PlayerAi(Snake &, Fruit &);

	/// @brief Метод, чтобы управлять движениями
	void ControlMovement();
};
