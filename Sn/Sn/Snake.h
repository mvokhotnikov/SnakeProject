#pragma once

#include <iostream>
#include <vector>
#include "Main.h"
#include "Position.h"
using namespace std;

enum Direction { LEFT, RIGHT, UP, DOWN };

/// @brief класс змейки
class Snake
{
	Direction diraction;
	vector<Position> tail;
	Position position;
public:
	/// @brief Метод для движения змейки
	void Move();

	/// @brief Метод, чтобы получить позицию пространстве
	/// @return Position позиция
	Position GetPosition();

	/// @brief Метод для изменения направления движения
	void ChangeDir(Direction);

	/// @brief Метод, чтобы получить направление движения
	/// @return Direction направление
	Direction GetDir();

	/// @brief Метод для создания объекта
	void Spawn();

	/// @brief Метод для увеличения хвоста
	void AddTail();

	/// @brief Метод для движения хвоста
	void MoveTail();

	/// @brief Метод, чтобы получить размер хвоста
	/// @return int размер хвостаа
	int GetTailSize();

	/// @brief Метод, чтобы получить позицию хвоста
	/// @param int индекс хвоста
	/// @return Position позиция хвоста
	Position TailPos(int);

	/// @brief Метод для проверки коллизии
	void CheckCollisions();

	/// @brief Метод для сброса змейки
	void Reset();
};
