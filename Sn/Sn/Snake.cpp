#include "Snake.h"


void Snake::Spawn()
{
	position = Position{
		WIDTH / 2  ,
		HEIGHT / 2
	};

	diraction = Direction(rand() % 4);
}


void Snake::AddTail()
{
	tail.push_back(Position{ 0,0 });
}

void Snake::MoveTail()
{
	if (tail.size() == 0)
	{
		return;
	}

	Position prev = tail[0];
	Position prev1;

	tail[0] = position;

	for (size_t i = 1; i < tail.size(); i++)
	{
		prev1 = tail[i];
		tail[i] = prev;
		prev = prev1;
	}
}

int Snake::GetTailSize()
{
	return tail.size();
}

Position Snake::TailPos(int index)
{
	return tail.at(index);
}

void Snake::CheckCollisions()
{
	if (position.x > WIDTH ||
		position.x < 0 ||
		position.y > HEIGHT ||
		position.y < 0)
	{
		GameOver = true;
		return;
	}

	for (int i = 1; i < tail.size(); i++)
	{
		if (tail[i].x == position.x && tail[i].y == position.y)
		{
			GameOver = true;
		}
	}

}

void Snake::Reset()
{
	Spawn();
	tail.clear();
}

void Snake::Move()
{
	CheckCollisions();

	MoveTail();

	switch (diraction)
	{
	case LEFT:
		position.x--;
		break;
	case RIGHT:
		position.x++;
		break;
	case UP:
		position.y--;
		break;
	case DOWN:
		position.y++;
		break;
	default:
		break;
	}

}

Position Snake::GetPosition()
{
	return position;
}

void Snake::ChangeDir(Direction dir)
{
	diraction = dir;
}

Direction Snake::GetDir()
{
	return diraction;
}
