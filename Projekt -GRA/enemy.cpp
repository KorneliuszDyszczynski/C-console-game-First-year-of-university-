
#include "enemy.h"
#include "Console.h"
#include "Windows.h"

#include <conio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>
#include <Windows.h>
#include "enemy.h"
#include <thread>
#include<string>

#include <cstdio>
#include <iostream>

using namespace std;


enemy::enemy()
{
}


enemy::~enemy()
{
}




void enemy::Move(int V, int H)
{
	int Ey2 = Ey + V;
	int Ex2 = Ex + H;

	

	if (map[Ey][Ex2] == ' '
		|| map[Ey][Ex2] == '8')
	{
		if (map[Ey2][Ex2] == '8')
		{
			
			Beep(155.6, 400);
			health -= 20;
			map[Ey2][Ex2] == '8';
			
		}
		else
		{
			map[Ey][Ex] = ' ';
			Ex += H;
			map[Ey][Ex] = enemy_symbol;
			
		}
		
		
	}
	if (map[Ey2][Ex] == ' '
		|| map[Ey2][Ex] == '8')
	{
		if (map[Ey2][Ex2] == '8')
		{
			
			Beep(155.6, 400);
			health -= 20;
			map[Ey2][Ex2] == '8';
			
		}
		else
		{
			map[Ey][Ex] = ' ';
			Ey += V;
			map[Ey][Ex] = enemy_symbol;
			
		}
		
	}
	
}


void enemy::update()
{
	COORD c;
	c.X = 0;
	c.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	for (int i = 0; i < 45; i++)
	{
		cout << map[i] << endl;

	}

	
}

void enemy::reset()
{
	health = 100;
	map[Ey][Ex] = ' ';
	location_set = false;
	sighted_player = false;
	dead = true;
}

int enemy::Init(int V, int H)
{
	//map[V][H] = enemy_symbol;
	if (!location_set)
	{
		Ex = H;
		Ey = V;
		map[Ey][Ex] = enemy_symbol;
		location_set = true;
		dead = false;
	}

	if (map[Ey][Ex] == ' ' || map[Ey][Ex] == '8')
	{
		dead = true;
	}

	if (dead != true)
	{
		if (Ey - y < 5 && Ey + y > 5
			&& Ex + x > 5 && Ex - x < 5)
		{
			sighted_player = true;
		}

		if (sighted_player)
		{
			
			
				if (y < Ey)
				{

					enemy::Move(-1, 0);
					

				}
				else if (y > Ey)
				{

					enemy::Move(1, 0);
					
				}
				else if (x > Ex)
				{

					enemy::Move(0, 1);
					
				}
				else if (x < Ex)
				{

					enemy::Move(0, -1);
					
				}
			
		}
	}
	return 0;
}

