#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include<string>
#pragma once
class enemy
{
public:
	 void reset();
	enemy();
	~enemy();
	void Move(int V, int H);
	int Init(int V, int H);
	void kill();
	int Ex = 0;
	int Ey = 0;
	int player_health = 100;
	char enemy_symbol = 'T';
	friend class Console;
	bool location_set = false;
	bool sighted_player = false;
	bool dead = true;
	void update();
}; 


//extern int Ex;
//extern int Ey;

#endif