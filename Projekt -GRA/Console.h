#ifndef CONSOLE_H
#define CONSOLE_H
#include <iostream>
#include"Console.h"
#include"Windows.h"
#include <conio.h>
#include<stdlib.h>
#include<time.h>
#include <thread>
#include <windows.h>
#include <Windows.h>
#include "enemy.h"
#include <cstdlib>
#include <sstream>
#include<string>
#include <stdlib.h>
#include <conio.h>
#pragma once

class Console
{
public:
	void draw();
	void reset();
	int arrows = 4;
	void Move(int V, int H);
	void Shoot(int V, int H);
	friend class enemy;
	void update();
	void gotoxy();
	bool got_key = false;
	void armataw(int x, int y);
	void armatas(int x, int y);
	void armatad(int x, int y);
	void armataa(int x, int y);
	void amove(int V, int H, int x, int y);
	void amove2(int V, int H, int x, int y);
	bool location_set = false;
	int Ex = 0;
	int Ey = 0;
	int Bx = 35;
	int By = 31;
	bool istnienie_armaty;
	bool d=true;
	void setColor(unsigned short color);
	void Boss();
	bool bossstart = false;
	bool bossalive=true;
	int bosshealth=300;
	bool w=false;
	bool zamk = true;
	
};

extern  char map[46][223];
extern int x;
extern int y;
extern int health;


#endif
