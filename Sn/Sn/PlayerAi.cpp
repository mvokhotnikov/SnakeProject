#include "PlayerAi.h"

PlayerAi::PlayerAi(Snake& acctualPlayer, Fruit& acctualFruit)
{
	player = &acctualPlayer;
	fruit = &acctualFruit;
}

void PlayerAi::ControlMovement()
{
	Position fruitPos = fruit->GetPosition();
	Position playerPos = player->GetPosition();
	char a0[20] = { 'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'D' };
	char a1[20] = { 'U', 'D', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L' };
	char a2[20] = { 'U',  'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'D' };
	char a3[20] = { 'U', 'D', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L' };
	char a4[20] = { 'U',  'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'D' };
	char a5[20] = { 'U', 'D', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L' };
	char a6[20] = { 'U',  'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'D' };
	char a7[20] = { 'U', 'D', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L' };
	char a8[20] = { 'U',  'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'D' };
	char a9[20] = { 'U', 'D', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L' };
	char a10[20] = { 'U',  'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'D' };
	char a11[20] = { 'U', 'D', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L' };
	char a12[20] = { 'U',  'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'D' };
	char a13[20] = { 'U', 'D', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L' };
	char a14[20] = { 'U',  'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'D' };
	char a15[20] = { 'U', 'D', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L' };
	char a16[20] = { 'U',  'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'D' };
	char a17[20] = { 'U', 'D', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L' };
	char a18[20] = { 'U',  'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'R',  'R', 'R', 'R', 'D' };
	char a19[20] = { 'U', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L', 'L' };

	if (playerPos.y == 0)
	{
		if (a0[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a0[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a0[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a0[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}

	if (playerPos.y == 1)
	{
		if (a1[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a1[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a1[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a1[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}

	if (playerPos.y == 2)
	{
		if (a2[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a2[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a2[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a2[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}
	if (playerPos.y == 3)
	{
		if (a3[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a3[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a3[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a3[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}
	if (playerPos.y == 4)
	{
		if (a4[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a4[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a4[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a4[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}

	if (playerPos.y == 5)
	{
		if (a5[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a5[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a5[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a5[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}

	if (playerPos.y == 6)
	{
		if (a6[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a6[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a6[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a6[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}
	if (playerPos.y == 7)
	{
		if (a7[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a7[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a7[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a7[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}
	if (playerPos.y == 8)
	{
		if (a8[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a8[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a8[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a8[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}

	if (playerPos.y == 9)
	{
		if (a9[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a9[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a9[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a9[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}

	if (playerPos.y == 10)
	{
		if (a10[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a10[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a10[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a10[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}

	if (playerPos.y == 11)
	{
		if (a11[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a11[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a11[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a11[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}
	if (playerPos.y == 12)
	{
		if (a12[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a12[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a12[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a12[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}

	if (playerPos.y == 13)
	{
		if (a13[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a13[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a13[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a13[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}

	if (playerPos.y == 14)
	{
		if (a14[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a14[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a14[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a14[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}
	if (playerPos.y == 15)
	{
		if (a15[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a15[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a15[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a15[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}
	if (playerPos.y == 16)
	{
		if (a16[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a16[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a16[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a16[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}
	if (playerPos.y == 17)
	{
		if (a17[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a17[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a17[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a17[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}
	if (playerPos.y == 18)
	{
		if (a18[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a18[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a18[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a18[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}
	if (playerPos.y == 19)
	{
		if (a19[playerPos.x] == 'L')
		{
			player->ChangeDir(LEFT);
		}
		else if (a19[playerPos.x] == 'R')
		{
			player->ChangeDir(RIGHT);
		}
		else if (a19[playerPos.x] == 'U')
		{
			player->ChangeDir(UP);
		}
		else if (a19[playerPos.x] == 'D')
		{
			player->ChangeDir(DOWN);
		}
	}
}