#include "Score.h"

void Score::SaveBestScore()
{
	file.open(filename);
	int num = 0;
	if (file.is_open())
	{
		file >> num;
	}
	

	if(score > num)
	{
		file << score;
	}
	file.close();
}

void Score::AddScore()
{
	score++;
}

void Score::ResetScore()
{
	SaveBestScore();
	score = 0;
}

int Score::GetScore()
{
	return score;
}
