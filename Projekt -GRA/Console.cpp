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
#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <dos.h>

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int x = 4; 
int y = 1;
int health = 100;



char map[46][223] = { 
"   #################################################################################################################################################################    |",
"   #                         #######                       #                              #         ##############      #                            #             #    |",
"   ###########               #######                       #                              #         #            #      #                            #             #    |",
"   #                         #######                       #                              #         #   #####    #      #                            #             #    |",
"   #                         ########                      #                    #####################   #   #    #      #                            #             #    |",
"   ###########               #######                       #                                            #   ######      #########################    #             #    |",
"   #                         #######                       #                    ###########################################    #     #    #    #                   #    |",
"   #                        ########   #####################                   #####################                    #                            #             #    |",
"   #                        ########                                          ######################                    #                            #             #    |",
"   #                        ####       #####################                  ######################                    #                            #             #    |",                                                                                                                                                                                                          
"   #                        ########   #            #      #                   #####################                    #                            #             #    |",
"   #                        ####       #            #      #                    ####################                                                 #             #    |",
"   #                         #######   #######  #####      #                      ##################                                                 #             #    |____________________",
"   #                         #                      #      #                        ################                                                 #             #    |",
"   ############    ###########                      #      #                        ######################   #################   ##########################    #####    |",
"   #                     #####                      #      #        ########        ######                    #              #   #                        #    #        |",
"   #                     #####                      #      #        #      #        ######                    #         ######   ######   #########       #    #        |",
"   #                     ###########                #      #        #      #        ######                    #         #             #   #       #       #    #        |",
"   #                     ###########                #      #        #      #                                  #         #             #   #       #       #    #        |",
"   #                     ###########   ##############      #        #      #        ######                    #         #             #####       #    ####    ###      |",
"   #                                                #      ##########      ####################################         #                         #    #         #      |",
"   ##################################################                                                                   #             #############    #         #      |",
"                                                                                                                        #             #                #         #      |",
"                                                                                                                        ###############           ######         #      |",
"     ###################################################################################                                                          #              #      |",
"     #                                                                                 #                                                          #              #      |",
"     #                                                                                 #                                                          #              #      |",
"     #                                                                                 #                                                          #              #      |",
"     #                                                                                 #############################################################    ##########      |",
"     #                                                                                  ?                                                               #               |",
"     #                                                                                 #########################~~#######################################               |",
"     #                                                                                 #                       #  #                                                     |",
"     #                                                                                 #                     ###  ###                                                   |",
"     #                                                                                 #                  ####      ####                                                |",
"     #                                                                                 #               ####            ####                                             |",
"     #                                                                                 #              #                    #                                            |",
"     #                                                                                 #              #                    #                                            |",
"     #                                                                                 #              #          K         #                                            |",
"     #                                                                                 #               ####            ####                                             |",
"     #                                                                                 #                  ####      ####                                                |",
"     ###################################################################################                     ########                                                   |", 
"                                                                                                                                                                        |",
"                                                                                                                                                                        |",
"________________________________________________________________________________________________________________________________________________________________________|____________________"};

int m = 1;
int z = 1;
int h = 0;
void Console::Boss()
{
	int i = 0;
	int q;
	if (bossalive)
	{

		if (map[29][86] == '8')
		{


			bossstart = true;
			if (zamk)
			{
				y = 29;
				x = 85;
				map[y][x] = '8';
				map[y][x + 1] = ' ';

				map[y][x + 2] = '#';
				zamk = false;
			}
		}


		if (bossstart)
		{
			

			if (bosshealth <= 0)
			{
				bossalive = false;
				Beep(329, 300); //E
				Beep(493, 300); //B
				Beep(698, 300); //F^
				Beep(659, 300);
				Beep(2960.0, 100);
				Beep(3322.4, 100);
				Beep(4000, 100);
				map[29][87] = ' ';
				COORD coord;
				coord.X = 1;
				coord.Y = 44;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
				cout << "You Killed a Boss! GO! Rescue a princess! " << "      ";
				map[30][112] = ' ';
				map[30][113] = ' ';
			}




			for (i; i < 9; i++)
			{
				map[By][Bx + i] = 'x';

			}
			i = 0;
			for (i; i < 11; i++)
			{

				map[By + 1][Bx - 1 + i] = 'x';
			}
			i = 0;
			for (i; i < 13; i++)
			{
				if (i == 4)
				{
					map[By + 2][Bx - 2 + i] = ' ';
				}
				else
					if (i == 8)
					{
						map[By + 2][Bx - 2 + i] = ' ';
					}
					else
						map[By + 2][Bx - 2 + i] = 'x';


			}
			i = 0;
			for (i; i < 13; i++)
			{

				if (i == 4)
				{
					map[By + 3][Bx - 2 + i] = ' ';
				}
				else
					if (i == 8)
					{
						map[By + 3][Bx - 2 + i] = ' ';
					}
					else
						map[By + 3][Bx - 2 + i] = 'x';
			}
			i = 0;
			for (i; i < 13; i++)
			{
				map[By + 4][Bx - 2 + i] = 'x';
			}
			i = 0;
			for (i; i < 11; i++)
			{
				map[By + 5][Bx - 1 + i] = 'x';
			}
			i = 0;
			for (i; i < 9; i++)
			{
				map[By + 6][Bx + i] = 'x';
			}
			i = 1;
			for (i; i < 8; i++)
			{

				map[By + 7][Bx + i] = 'x';
			}

			i = 0;





			if (map[By - 2][Bx] == '#')
			{
				m = 1;
			}
			else if (map[By + 9][Bx] == '#')
			{
				m = -1;
			}




			if (map[By + 2][Bx + 13] == '#')
			{
				z = -1;
			}
			else if (map[By + 2][Bx - 4] == '#')
			{
				z = 1;
			}





			By += m;
			Bx += z;




			map[By][Bx + 9] = ' ';
			map[By][Bx - 3] = ' ';
			map[By][Bx - 2] = ' ';
			map[By][Bx - 1] = ' ';
			map[By][Bx + 10] = ' ';
			map[By][Bx + 11] = ' ';
			map[By][Bx + 12] = ' ';
			map[By + 1][Bx - 2] = ' ';
			map[By + 1][Bx - 3] = ' ';
			map[By + 1][Bx + 10] = ' ';
			map[By + 1][Bx + 11] = ' ';
			map[By + 1][Bx + 12] = ' ';
			map[By + 2][Bx - 3] = ' ';
			map[By + 2][Bx + 12] = ' ';
			map[By + 3][Bx - 3] = ' ';
			map[By + 3][Bx + 12] = ' ';
			map[By + 4][Bx - 3] = ' ';
			map[By + 4][Bx + 12] = ' ';
			map[By + 5][Bx - 2] = ' ';
			map[By + 5][Bx - 3] = ' ';
			map[By + 5][Bx + 10] = ' ';
			map[By + 5][Bx + 11] = ' ';
			map[By + 5][Bx + 12] = ' ';
			map[By + 6][Bx - 3] = ' ';
			map[By + 6][Bx - 2] = ' ';
			map[By + 6][Bx - 1] = ' ';
			map[By + 6][Bx + 9] = ' ';
			map[By + 6][Bx + 10] = ' ';
			map[By + 6][Bx + 11] = ' ';
			map[By + 6][Bx + 12] = ' ';
			map[By + 7][Bx - 3] = ' ';
			map[By + 7][Bx - 2] = ' ';
			map[By + 7][Bx - 1] = ' ';
			map[By + 7][Bx + 8] = ' ';
			map[By + 7][Bx + 10] = ' ';
			map[By + 7][Bx + 11] = ' ';
			map[By + 7][Bx + 12] = ' ';
			map[By + 7][Bx] = ' ';
			map[By + 7][Bx + 9] = ' ';

			if (map[y][x] == 'x')
			{
				health -= 20;
			}

			if (map[By - 1][Bx] != '#' )
			{

				for (i - 1; i < 11; i++)
				{
					if (map[By -1][Bx + i - 1] != 'I' && map[By -1][Bx + i - 1] != '8')
					map[By - 1][Bx + i - 1] = ' ';
				}
				i = 0;
			}

			if (map[By + 8][Bx] != '#')
			{

				for (i - 1; i < 11; i++)
				{
					if(map[By + 8][Bx + i - 1] != 'I' && map[By + 8][Bx + i - 1] != '8')
					map[By + 8][Bx + i - 1] = ' ';

				}
				i = 0;
			}



		}
	}
}


void Console::update()
{
	COORD coord;
	
	coord.X = 0;
	coord.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	for (int i = 0; i < 45; i++)
	{
		cout << map[i] << endl;

	}
	
	coord.X = 170;
	coord.Y = 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "Arrows: " << arrows<<"      ";




	coord.X = 170;
	coord.Y = 5;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "Health: " << health << "     ";


	coord.X = 170;
	coord.Y = 8;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "Key: ";
	if (got_key)
	{
		cout << "?";
	}
	else
		cout << " ";

	if (map[29][85] == '8')
	{
		w = true;
	}

	if (w)
	{
		coord.X = 170;
		coord.Y = 11;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << "Boss Health: " << bosshealth << "     ";
	}

	coord.X = 170;
	coord.Y = 14;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "Move: W A S D  ";

	coord.X = 170;
	coord.Y = 17;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "Shoot: Arrows  ";

	coord.X = 170;
	coord.Y = 20;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "T - Zombie  ";

	coord.X = 170;
	coord.Y = 23;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "I - Tower ";
	coord.X = 170;
	coord.Y = 24;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "o - tower bullet  ";

	coord.X = 170;
	coord.Y = 27;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "+ - First Aid Kit  ";

	coord.X = 170;
	coord.Y = 30;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "= - chest 1-3 arrows ";

	coord.X = 170;
	coord.Y = 33;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "Q - Princess ";

	coord.X = 170;
	coord.Y = 36;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "% - Door ";

	coord.X = 170;
	coord.Y = 39;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "8 - You ";

	coord.X = 170;
	coord.Y = 42;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "Press R to reset ";

	coord.X = 149;
	coord.Y = 44;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "|Find and Kill Boss to rescue a princess| ";
	
}




void Console::draw()
{
	
	map[y][x] = '8';
	
	map[29][86] = '%';
	map[4][10] = '=';
	map[15][5] = '+';
	map[20][31] = '=';
	map[20][50] = '+';
	map[11][41] = '+';
	map[10][41] = '=';
	map[1][57] = '=';
	map[6][57] = '=';
	map[1][62] = '+';
	map[19][66] = '=';
	map[1][89] = '+';
	map[3][89] = '=';
	map[19][77] = '+';
	map[7][101] = '=';
	map[17][141] = '=';
	map[17][142] = '=';
	map[17][140] = '+';
	map[17][143] = '+';
	map[20][153] = '+';
	map[29][102] = '+';
	map[29][100] = '=';
	map[25][6] = '=';
	map[39][6] = '=';
	map[25][86] = '=';
	map[39][86] = '=';
	map[4][110] = '=';
	map[4][111] = '+';
	map[1][122] = '+';
	map[1][152] = '=';
	map[1][154] = '+';
	map[37][113] = 'Q';
	map[3][58] = '?';
}

void Console::Shoot(int V, int H)
{
	int l;
	int a = x;
	int b = y;
	int a2 = b + V;
	int b2 = a + H;
	
	
		
			if (V == 1)
			{
				while (map[a2][b2] != '#' && map[a2][b2] != '*' && map[a2][b2] != '%' && map[a2][b2] != 'I')
				{
					if (map[a2 - 1][b2] != '8')
					{
						map[a2 - 1][b2] = ' ';
						
					}
					
					if (map[a2 - 1][b2] == 'x' || map[a2][b2] == 'x')
					{
						bosshealth -= 20;
						break;
					}
					
					if (map[a2 + 1][b2] == 'T' || map[a2][b2] == 'T')
					{
						map[a2 + 1][b2] = ' ';
						map[a2][b2] = ' ';
						
						COORD coord;
						coord.X = 1;
						coord.Y = 44;
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
						cout << "You Killed a Zombie! " << "      ";

						break;
					}
					else
					{
						map[a2][b2] = '*';
						a2++;
						update();
					}
						
						
						
				}

			}

			if (V == -1)
			{
				while (map[a2][b2] != '#' && map[a2][b2] != '*' && map[a2][b2] != '%' && map[a2][b2] != 'I')
				{
					 
					if (map[a2 + 1][b2] != '8')
					{
						map[a2 + 1][b2] = ' ';
						
					}
					
					if (map[a2 - 1][b2] == 'x' || map[a2][b2] == 'x')
					{
						bosshealth -= 20;
						break;
					}

					
					if (map[a2 - 1][b2] == 'T' || map[a2][b2] == 'T')
					{
						map[a2 - 1][b2] = ' ';
						map[a2][b2] = ' ';
						
						COORD coord;
						coord.X = 1;
						coord.Y = 44;
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
						cout << "You Killed a Zombie! " << "      ";
						break;
					}
					else
					{
						map[a2][b2] = '*';
						a2--;
						update();
					}
					
					
					
				}

			}
		


		
			if (H == 1)
			{
				while (map[a2][b2] != '#' && map[a2][b2] != '*' && map[a2][b2] != '%' && map[a2][b2] != 'I')
				{
					if (map[a2 ][b2-1] != '8')
					{
						map[a2][b2-1] = ' ';
						
					}
					
					if (map[a2 - 1][b2] == 'x' || map[a2][b2] == 'x')
					{
						bosshealth -= 20;
						break;
					}

					if (map[a2][b2+1] == 'T' || map[a2][b2] == 'T')
					{
						map[a2][b2+1] = ' ';
						map[a2][b2] = ' ';
						
						COORD coord;
						coord.X = 1;
						coord.Y = 44;
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
						cout << "You Killed a Zombie! " << "      ";
						break;
					}
					else {
						map[a2][b2] = '*';
						b2++;
						update();
					}
					
					
					
				}
				
			}
			if (H == -1)
			{
				while (map[a2][b2] != '#' && map[a2][b2] != '*' && map[a2][b2] != '%' && map[a2][b2] != 'I')
				{
					if (map[a2][b2 + 1] != '8')
					{
						map[a2][b2 + 1] = ' ';
						
					}
					
					if (map[a2 - 1][b2] == 'x' || map[a2][b2] == 'x')
					{
						bosshealth -= 20;
						break;
					}

					if (map[a2][b2-1] == 'T' || map[a2][b2] == 'T')
					{
						map[a2][b2-1] = ' ';
						map[a2][b2] = ' ';
						
						COORD coord;
						coord.X = 1;
						coord.Y = 44;
						SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
						cout << "You Killed a Zombie! " << "      ";
						break;
					}
					else
					{
						map[a2][b2] = '*';
						b2--;
						update();
					}
					
					
					
				}
			}
		


		

	
}

void Console::armataw(int x, int y)
{
	
	if (!location_set)
	{
		Ex = x;
		Ey = y;
		map[Ey][Ex] = 'I';
		location_set = true;
		istnienie_armaty = true;
		
	}
	
	
	if (istnienie_armaty)
	{
		amove(-1, 0, x, y);
		
	}
	
}

void Console::armatas(int x, int y)
{

	if (!location_set)
	{
		Ex = x;
		Ey = y;
		map[Ey][Ex] = 'I';
		location_set = true;
		istnienie_armaty = true;

	}


	if (istnienie_armaty)
	{
		amove(1, 0, x, y);

	}

}

void Console::armatad(int x, int y)
{

	if (!location_set)
	{
		Ex = x;
		Ey = y;
		map[Ey][Ex] = 'I';
		location_set = true;
		istnienie_armaty = true;

	}


	if (istnienie_armaty)
	{
		amove(0, 1, x, y);

	}

}

void Console::armataa(int x, int y)
{

	if (!location_set)
	{
		Ex = x;
		Ey = y;
		map[Ey][Ex] = 'I';
		location_set = true;
		istnienie_armaty = true;

	}


	if (istnienie_armaty)
	{
		amove(0, -1, x, y);

	}

}

void Console::amove(int V, int H, int x, int y)
{
	
	int a2 = Ey + V;
	int b2 = Ex + H;
	
	if (H == 1)
	{


		


		if (map[a2][b2] != '#' && map[a2][b2] != 'x')
		{

			if (map[a2][b2-1] != 'I')
			{
				map[a2][b2-1] = ' ';

			}


			if (map[a2][b2] == '8' || map[a2][b2] == '8')
			{

				map[a2][b2] = '8';
				Beep(155.6, 200);
				health -= 20;

				location_set = false;
				istnienie_armaty = false;

			}
			else

			{
				
				map[a2][b2] = 'o';
				
				Ex += H;
				
			}

		}
		else {
			map[a2][b2 - 1] = ' ';
			location_set = false;
			istnienie_armaty = false;
		}




	}
	

	if (H == -1)
	{





		if (map[a2][b2] != '#' && map[a2][b2] != 'x')
		{

			if (map[a2][b2 + 1] != 'I')
			{
				map[a2][b2 + 1] = ' ';

			}


			if (map[a2][b2] == '8' || map[a2][b2] == '8')
			{

				map[a2][b2] = '8';
				Beep(155.6, 200);
				health -= 20;
				location_set = false;
				istnienie_armaty = false;

			}
			else

			{
				map[a2][b2] = 'o';
				Ex += H;
				
			}

		}
		else {
			map[a2][b2 + 1] = ' ';
			location_set = false;
			istnienie_armaty = false;
		}




	}


	if (V == 1)
	{





		if (map[a2][b2] != '#' && map[a2][b2] != 'x')
		{

			if (map[a2 - 1][b2] != 'I')
			{
				map[a2 - 1][b2] = ' ';

			}


			if (map[a2][b2] == '8' || map[a2][b2] == '8')
			{

				map[a2][b2] = '8';
				Beep(155.6, 200);
				health -= 20;
				location_set = false;
				istnienie_armaty = false;

			}
			else

			{
				map[a2][b2] = 'o';
				Ey += V;
				
			}

		}
		else {
			map[a2 - 1][b2] = ' ';
			location_set = false;
			istnienie_armaty = false;
		}




	}
	

	if (V==-1)
	{
		
		
		
		
		
			if (map[a2][b2] != '#' && map[a2][b2] != 'x')
			{

				if (map[a2 + 1][b2] != 'I')
				{
					map[a2 + 1][b2] = ' ';

				}


				if (map[a2][b2] == '8' || map[a2][b2] == '8')
				{
					
					map[a2][b2] = '8';
					Beep(155.6, 200);
					health -= 20;
					location_set = false;
					istnienie_armaty = false;

				}
				else
				
				{
					
					map[a2][b2] = 'o';
					Ey += V;
					
				}

			}
			else {
				map[a2+1][b2] = ' ';
				location_set = false;
				istnienie_armaty = false;
			}
			

			
		
	}
	
}



void Console::reset()
{
	map[y][x] = ' ';
	bossalive = true;
	
	bosshealth = 300;
	arrows = 40;
	x = 4;
	y = 1;
	got_key = false;
	update();
	draw();
	map[31][87] = ' ';
	
}

void Console::Move(int V, int H)
{
	int y2 = y + V;
	int x2 = x + H;

	if (map[y2][x2] == '#' || map[y2][x2] == 'T' || map[y2][x2] == '~' || map[y2][x2] == 'I')
	{
		map[y][x] = '8';
		

	}
	else 
	{
		if (map[y2][x2] == '%' && got_key==false)
		{
			map[y][x] = '8';
			

		}
		else
		{
			if (map[y2][x2] == '*')
			{
				Beep(3951, 200);
				arrows++;

				COORD coord;
				coord.X = 1;
				coord.Y = 44;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
				cout << "You picked up an arrow! " << "                              ";
			}

			if (map[y2][x2] == '=')
			{
				Beep(2960.0, 100);
				Beep(3322.4, 100);
				Beep(3951, 200);


				int i = (rand() % 3) + 1;
				arrows += i;

				COORD coord;
				coord.X = 1;
				coord.Y = 44;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
				cout << "You opened a chest! " << "                                    ";

			}
			if (map[y2][x2] == '+')
			{
				Beep(2960.0, 100);
				Beep(3322.4, 100);
				Beep(3951, 200);


				health += 40;

				COORD coord;
				coord.X = 1;
				coord.Y = 44;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
				cout << "You found first aid kit!" << "                                ";

			}
			if (map[y2][x2] == '?')
			{
				Beep(3951, 200);
				got_key = true;
				COORD coord;
				coord.X = 1;
				coord.Y = 44;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
				cout << "You picked up an key! " << "                               ";
			}
			if (map[y][x2])
			{

				map[y][x] = ' ';
				x += H;
				map[y][x] = '8';
				


			}
			if (map[y2][x2] == 'Q')
			{

				
				health = 2000;


			}
			if (map[y2][x])
			{
				map[y][x] = ' ';
				y += V;
				map[y][x] = '8';
				

			}
		}
	}

	
} 