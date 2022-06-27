#include "Main.h"
#include "../Tests/SnakeTest.cpp"

Snake player;
Fruit fruit;

Score score;

PlayerAi ai(player, fruit);

bool ifplayerAI = false;

bool GameOver = false;

/// @brief Функция рисует графику
void Draw() {
	system("cls");
	cout << "\n\t\t  TO RUN BOT PRESS 'B'" << endl;
	cout << "\n\t\t  TO RESTART GAME PRESS 'X'" << endl;

	cout << "\n\t\t      :SNAKE GAME:\n";
	cout << "\t\t";
	for (int i = 0; i < WIDTH - 8; i++)
	{
		cout << "||";
	}
	cout << endl;
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			if (j == 0)
			{
				cout << "\t\t||";
			}
			if (i == player.GetPosition().y &&
				j == player.GetPosition().x)
			{
				cout << "O";
			}
			else if (i == fruit.GetPosition().y &&
				j == fruit.GetPosition().x) {
				cout << "X";
			}
			else
			{
				bool ifTail = false;
				for (int k = 0; k < player.GetTailSize(); k++)
				{
					if (player.TailPos(k).x == j &&
						player.TailPos(k).y == i)
					{
						cout << "o";
						ifTail = true;
						break;
					}
				}
				if (!ifTail)
				{
					cout << " ";
				}
			}
			if (j == WIDTH - 1) {
				cout << "||";
			}
		}
		cout << endl;
	}
	cout << "\t\t";
	for (int i = 0; i < WIDTH - 8; i++)
	{
		cout << "||";
	}
	cout << endl;
	cout << "\t\t\tScore: " << score.GetScore() << endl;

}


/// @brief Функция делает инициализацию
void InitialSetup()
{
	GameOver = false;
	player.Reset();
	fruit.Spawn();
	score.ResetScore();
}

/// @brief Функция отвечает за интеракцию
void Input()
{
	if (ifplayerAI == true)
	{
		ai.ControlMovement();
		if (_kbhit())
		{
			switch (_getch())
			{
			case 'x':
				InitialSetup();
				break;
			case 'b':
				ifplayerAI = false;
				break;
			default:
				break;
			}
		}
	}
	else if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			player.ChangeDir(LEFT);
			break;
		case 'd':
			player.ChangeDir(RIGHT);
			break;
		case 'w':
			player.ChangeDir(UP);
			break;
		case 's':
			player.ChangeDir(DOWN);
			break;
		case 'x':
			InitialSetup();
			break;
		case 'b':
			ifplayerAI = true;
			break;

		}
	}
}

/// @brief Функция для съедения фрукта
void EatFruit()
{
	score.AddScore();
	fruit.Spawn();
}

/// @brief Функция проверяет съел ли игрок фрукт
void CheckFruit()
{
	if (fruit.GetPosition().x == player.GetPosition().x &&
		fruit.GetPosition().y == player.GetPosition().y)
	{
		EatFruit();
		player.AddTail();
	}
}

/// @brief Главная цикличная функция игры
void GameLoop()
{
	InitialSetup();

	while (true)
	{
		while (GameOver == false)
		{
			Draw();
			Input();
			player.Move();
			CheckFruit();
			_sleep(100);
		}
		cout << endl << endl;
		cout << "\t\t";
		cout << "YOU LOST" << endl<< endl;
		cout << "\t\t";
		cout << "YOUR SCORE IS: " << score.GetScore() << endl << endl;
		cout << "\t\t";
		cout << "PRESS X TO RESTART" << endl;

		while (true)
		{
			char c = getch();
			if (c == 'x')
			{
				InitialSetup();
				break;
			}
		}

	}

}

void MainMenu()
{
	cout <<
		"Snake is a video game genre where the player maneuvers a growing\n" <<
		"line that becomes a primary obstacle to itself.The concept\n"<<
		"originated in the 1976 two - player arcade game Blockade from Gremlin\n" <<
		"Industries, and the ease of implementation has led to hundreds of\n"<<
		"versions(some of which have the word snake or worm in the title) for many platforms.\n"<<
		"1982's Tron arcade game, based on the film, includes snake gameplay for the\n"<<
		"single - player Light Cycles segment.After a variant was preloaded on Nokia\n"<<
		"mobile phones in 1998, there was a resurgence of interest in snake games as it found a larger audience.";

	cout << endl << endl;
	cout << "Use WASD to move the snake" << endl;
	cout << "Use X to restart the game" << endl;
	cout << "Use B to let bot play the game" << endl;
	cout << endl << endl;
	cout << "Press anything to start...";
	getch();

	system("cls");
	cout << endl << endl;
	cout << "Use WASD to move the snake" << endl;
	cout << "Use X to restart the game" << endl;
	cout << "Use B to let bot play the game" << endl;
	cout << endl << endl;


	cout << "If you want bot to play, press 1, else 2"<<endl;
	while (true)
	{
		char c = getch();
		if (c == '1')
		{
			ifplayerAI = true;
			break;
		}
		else if (c == '2')
		{
			ifplayerAI = false;
			break;
		}
		else
		{
			cout << "If you wwant bot to play, press 1, else 2" << endl;
		}
	}
}

int main()
{
	void Karusha();
	system("pause");
	MainMenu();
	srand(time(NULL));
	GameLoop();
}


