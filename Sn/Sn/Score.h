#pragma once


#include<sstream>
#include<fstream>
#include<iomanip>

using namespace std;

class Score
{
	int score = 0;
	const string filename = "example.txt";
	std::fstream file;
public:
	/// @brief Метод для получения результата
	int GetScore();

	/// @brief Метод для сохранения лучшего результата
	void SaveBestScore();

	/// @brief Метод для добаления результата
	void AddScore();

	/// @brief Метод для сброса результата
	void ResetScore();
};
