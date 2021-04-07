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
using namespace std;
bool gamerun = true;

Console console;
Console console2;
Console console3;
Console console5;
Console console4;
Console console6;
Console console7;
Console console8;
Console console9;
Console console10;
Console console11;
Console console12;
Console console13;
Console console15;
Console console14;
Console console16;
Console console17;
Console console18;
Console console19;
Console console20;
Console console21;
Console console22;
Console console23;
Console console25;
Console console24;
Console console26;
Console console27;
Console console28;
Console console29;
Console console30;
Console console31;
Console console32;
Console console33;
Console console35;
Console console34;
Console console36;
Console console37;
Console console38;
Console console39;
Console console40;
Console console41;
Console console42;
Console console43;
Console console45;
Console console44;
Console console46;
Console console47;
Console console48;
Console console49;
enemy enemy1;
enemy enemy2;
enemy enemy3;
enemy enemy4;
enemy enemy5;
enemy enemy6;
enemy enemy7;
enemy enemy8;
enemy enemy9;
enemy enemy10;
enemy enemy11;
enemy enemy12;
enemy enemy13;
enemy enemy14;
enemy enemy15;
enemy enemy16;
enemy enemy17;
enemy enemy18;
enemy enemy19;
enemy enemy20;
enemy enemy21;
enemy enemy22;
enemy enemy23;
enemy enemy24;
enemy enemy25;
enemy enemy26;
enemy enemy27;
HANDLE hOut;
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void SetWindow(int Width, int Height)
{
	_COORD coord;
	coord.X = Width;
	coord.Y = Height;

	_SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Bottom = Height - 1;
	Rect.Right = Width - 1;

	HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);     
	SetConsoleScreenBufferSize(Handle, coord);           
	SetConsoleWindowInfo(Handle, TRUE, &Rect);            
}


char kod;

void poruszanie()
{
	kod = 0;
	if (_kbhit() == 1)
	{
		
		kod = _getch();

	}
}

void aktualizacja(Console & console, Console& console2, Console& console3, Console& console4, Console& console5, Console& console6, Console& console7, Console& console8, Console& console9, Console& console10, Console& console11, Console& console12, Console& console13, Console& console14, Console& console15, Console& console16, Console& console17, Console& console18, Console& console19, Console& console20, Console& console21, Console& console22, Console& console23, Console& console24, Console& console25, Console& console26, Console& console27, Console& console28, Console& console29, Console& console30, Console& console31, Console& console32, Console& console33, Console& console34, Console& console35, Console& console36, Console& console37, Console& console38, Console& console39, Console& console40, Console& console41, Console& console42, Console& console43, Console& console44, Console& console45, Console& console46, Console& console47, Console& console48, Console& console49, enemy& enemy1, enemy& enemy2, enemy& enemy3, enemy& enemy4, enemy& enemy5, enemy& enemy6, enemy& enemy7, enemy& enemy8, enemy& enemy9, enemy& enemy10, enemy& enemy11, enemy& enemy12, enemy& enemy13, enemy& enemy14, enemy& enemy15, enemy& enemy16, enemy& enemy17, enemy& enemy18, enemy& enemy19, enemy& enemy20, enemy& enemy21, enemy& enemy22, enemy& enemy23, enemy& enemy24, enemy& enemy25, enemy& enemy26, enemy& enemy27)
{

	
	if (GetAsyncKeyState('W'))
	{

		console.Move(-1, 0);
	}

	if (GetAsyncKeyState('S'))
	{

		console.Move(1, 0);
	}

	if (GetAsyncKeyState('A'))
	{

		console.Move(0, -1);
	}

	if (GetAsyncKeyState('D'))
	{

		console.Move(0, 1);
	}
	
	if(GetAsyncKeyState('R'))
	{
		enemy1.reset();
		enemy2.reset();
		enemy3.reset();
		enemy4.reset();
		enemy5.reset();
		enemy6.reset();
		enemy7.reset();
		enemy8.reset();
		enemy9.reset();
		enemy10.reset();
		enemy11.reset();
		enemy12.reset();
		enemy13.reset();
		enemy14.reset();
		enemy15.reset();
		enemy16.reset();
		enemy17.reset();
		enemy18.reset();
		enemy19.reset();
		enemy20.reset();
		enemy21.reset();
		enemy22.reset();
		enemy23.reset();
		enemy24.reset();
		enemy25.reset();
		enemy26.reset();
		enemy27.reset();
		console.reset();
	}
		
			
			
			if(GetAsyncKeyState(VK_UP))
			{
				if (console.arrows > 0)
				{
					Beep(220, 200);
					console.Shoot(-1, 0);
					console.arrows--;

				}
			}

			if (GetAsyncKeyState(VK_DOWN))
			{
				if (console.arrows > 0)
				{
					Beep(220, 200);
					console.Shoot(1, 0);
					console.arrows--;

				}
			}

			if (GetAsyncKeyState(VK_LEFT))
			{
				if (console.arrows > 0)
				{
					Beep(220, 200);
					console.Shoot(0, -1);
					console.arrows--;

				}
			}

			if (GetAsyncKeyState(VK_RIGHT))
			{
				if (console.arrows > 0)
				{
					Beep(220, 200);
					console.Shoot(0, 1);
					console.arrows--;

				}
			}

			
			enemy1.Init(24, 148 );
			enemy2.Init(29, 127);
			enemy3.Init(17, 7);
			enemy4.Init(19, 16);
			enemy5.Init(18, 45);
			enemy6.Init(16, 31);
			enemy7.Init(10, 37);
			enemy8.Init(13, 51);
			enemy9.Init(11, 45);
			enemy10.Init(11, 51);
			enemy11.Init(13, 161);
			enemy12.Init(11, 151);
			enemy13.Init(6, 162);
			enemy14.Init(20, 132);
			enemy15.Init(19, 125);
			enemy16.Init(22, 123);
			enemy17.Init(1, 147);
			enemy18.Init(4, 131);
			enemy19.Init(10, 148);
			enemy20.Init(13, 147);
			enemy21.Init(13, 119);
			enemy22.Init(17, 91);
			enemy23.Init(16, 76);
			enemy24.Init(13, 61);
			enemy25.Init(6, 61);
			enemy26.Init(5, 91);
			


			console.armataa(27, 2);
			console2.armatad(5, 3);
			console3.armatad(5, 6);
			console4.armatad(5, 8);
			console5.armatad(5, 12);
			console6.armatad(16, 11);
			console7.armataa(16, 11);
			console8.armataa(27, 5);
			console9.armataa(22, 9);
			console10.armataa(25, 13);
			console11.armatas(39, 1);
			console12.armataw(43, 6);
			console13.armatas(47, 1);
			console14.armataw(50, 6);
			console15.armatas(53, 1);
			console16.armataa(160, 21);
			console17.armataa(162, 7);
			console18.armatad(151, 4);
			console19.armatad(122, 7);
			console20.armatad(122, 3);
			console21.armataw(139, 13);
			console22.armataw(130, 13);
			console23.armatas(137, 6);
			console24.armatad(101, 13);
			console25.armatas(116, 9);
			console26.armataa(83, 17);
			console27.armataa(83, 15);
			console28.armataa(76, 9);
			console29.armatad(60, 15);
			console30.armatad(60, 17);
			console31.armatas(69, 1);
			console32.armatas(101, 2);
			console33.armatas(85, 25);
			console34.armatas(71, 25);
			console35.armatas(59, 25);
			console36.armatas(45, 25);
			console37.armatas(37, 25);
			console38.armatas(25, 25);
			console39.armatas(13, 25);
			console40.armataw(79, 39);
			console41.armataw(65, 39);
			console42.armataw(52, 39);
			console43.armataw(34, 39);
			console44.armataw(19, 39);
			console45.armatad(6, 28);
			console46.armatad(6, 36);
			console47.armataa(86, 31);
			console48.armatad(32, 11);
			console49.armatad(32, 9);
			console.Boss();
	}
	


int main()
{
	
	
	SetWindow(190, 46);
	cout << "                       _________________,8*________8____*888__`*88888b._ _____________   88888888888888888888888888                             88888888888888888888888888" << endl;
	cout << "                       _______________,d8________________*88___________*8 8b.__________  888888888888888888888888888                           888888888888888888888888888" << endl;
	cout << "                       ______________d8`__________________*8b____________ ___*8b.______  8888888888888888888888888888                         8888888888888888888888888888" << endl;
	cout << "                       ____________,d8`____________________*8.___________ _______*88b._  88888888888888888888888888888                       88888888888888888888888888888" << endl;
	cout << "                       ___________d8P_______________________88.__________ _____________  888888888888888888888888888888                     888888888888888888888888888888" << endl;
	cout << "                       _________,88P________________________888__________ _____________  8888888888888888888888888888888                   8888888888888888888888888888888" << endl;
	cout << "                       ________d888*_______.d88P____________888__________ _____________  88888888888888888888888888888888                 88888888888888888888888888888888" << endl;
	cout << "                       _______d8888b..d888888*______________888__________ _____________  8888888888888888 8888888888888888               8888888888888888 8888888888888888" << endl;
	cout << "                       _____,888888888888888b.______________888__________ _____________  8888888888888888  8888888888888888             8888888888888888  8888888888888888" << endl;
	cout << "                       ____,8*;88888P*788888888ba._____888___________ ____________       8888888888888888   8888888888888888           8888888888888888   8888888888888888" << endl;
	cout << "                       ___,8;,8888*________`88888*__________d88*_________ ______________ 8888888888888888    8888888888888888         8888888888888888    8888888888888888" << endl;
	cout << "                       ___)8e888*__________,88888be.________888__________ ______________ 8888888888888888     8888888888888888       8888888888888888     8888888888888888" << endl;
	cout << "                       __,d888`___________,8888888*_____d888___________ _____________    8888888888888888      8888888888888888     8888888888888888      8888888888888888" << endl;
	cout << "                       _,d88P`___________,8888888Pb._____d888`___________ _____________  8888888888888888       8888888888888888   8888888888888888       8888888888888888" << endl;
	cout << "                       _888*____________,88888888*___.d8888*____________ _____________   8888888888888888        88888888888888888888888888888888         8888888888888888" << endl;
	cout << "                       _`88____________,888888888____.d88888b____________ _____________  8888888888888888           88888888888888888888888888            8888888888888888" << endl;
	cout << "                       __`P___________,8888888888bd888888*_______________ _____________  8888888888888888              88888888888888888888               8888888888888888" << endl;
	cout << "                       _______________d888888888888d888*_________________ _____________  8888888888888888                 88888888888888                  8888888888888888" << endl;
	cout << "                       _______________8888888888888888b._________________ _____________  8888888888888888                    88888888                     8888888888888888" << endl;
	cout << "                       _______________88*._*88888888888b.________.db_____ _____________  8888888888888888                       88                        8888888888888888" << endl;
	cout << "                       _______________`888b.`8888888888888b._.d8888P_____ _____________  8888888888888888                                                 8888888888888888" << endl;
	cout << "                       ________________*88b.`*8888888888888888888888b... _____________   8888888888888888                                                 8888888888888888" << endl;
	cout << "                       _________________*888b.`*8888888888P*78888888888 88e.________     8888888888888888                                                 8888888888888888" << endl;
	cout << "                       __________________88888b.`*.d8888b*`88888P *___________           8888888888888888                                                 8888888888888888" << endl;
	cout << "                       __________________`888888b_____.d88888888888*`888 8.___________   8888888888888888       88           88888888          8888888    8888888888888888" << endl;
	cout << "                       ___________________)888888.___d888888888888P___`88 88888b.______  8888888888888888      8888               888          88         8888888888888888" << endl;
	cout << "                       __________________,88888*____d88888888888*`____`8 888b_________   8888888888888888     88   88            888           88         8888888888888888" << endl;
	cout << "                       _________________,8888*____.8888888888P`__________ `888b.________ 8888888888888888     88   88           888            8888       8888888888888888" << endl;
	cout << "                       ________________,888*______888888888b...__________ __`888P88b.____8888888888888888     8888888          888             88         8888888888888888" << endl;
	cout << "                       _______.db.___,d88*________88888888888888b________ __`8888_______ 8888888888888888     88   88         888              88         8888888888888888" << endl;
	cout << "                       ___,d888888b.8888`_________`*888888888888888888P`_ __`888b._____  8888888888888888     88   88        88888888          8888888    8888888888888888" << endl;
	cout << "                       __/*8888b*`______________`*8888P*``8888`______ _`8888b.__         8888888888888888                                                 8888888888888888" << endl;
	cout << "                       _______/*88`_________________.ed8b..__.d888P`____________ `88888_ 8888888888888888                                                 8888888888888888" << endl;
	cout << "                       ____________________________d8*888888888P*_______ ________`88b_   8888888888888888                                                 8888888888888888" << endl;
	cout << "                       ___________________________(*``,d8888*`_________ ___________`88   8888888888888888                                                 8888888888888888" << endl;
	cout << "                       ______________________________(*`_________________ ______________`8888888888888888                                                 8888888888888888" << endl;
	
	system("pause");
	system("cls");
	console.draw();
	console.update();
	int wsp = 0;
	while(gamerun)
	{

		stringstream ss2;
		ss2 << health;
		ss2 << wsp;
		HANDLE hOut;

		
		
				
				
				
				
				

				
		
				console.update();
				aktualizacja(console, console2, console3, console4, console5, console6, console7, console8, console9, console10, console11, console12, console13, console14, console15, console16, console17, console18, console19, console20, console21, console22, console23, console24, console25, console26, console27, console28, console29, console30, console31, console32, console33, console34, console35, console36, console37, console38, console39, console40, console41, console42, console43, console44, console45, console46, console47, console48, console49, enemy1, enemy2, enemy3, enemy4, enemy5, enemy6, enemy7, enemy8, enemy9, enemy10, enemy11, enemy12, enemy13, enemy14, enemy15, enemy16, enemy17, enemy18, enemy19, enemy20, enemy21, enemy22, enemy23, enemy24, enemy25, enemy26, enemy27 );
				poruszanie();
				
				if (health <= 0)
				{
					
					{
						int l = 0;
						do {
							system("cls");
							
							cout << " Game Over " << endl;
							
							cout << "One more game ? " << endl;
							cout << "1.No 2.Yes" << endl;
							Beep(246.9, 200);
							Beep(207, 200);
							Beep(185, 200);
							Beep(174.6, 200);
							int c;
							c = _getch();

							system("pause");
							switch (c)
							{

							case 49:
								gamerun = false;
								return 1;
							case 50:
							{

								enemy1.reset();
								enemy2.reset();
								enemy3.reset();
								enemy4.reset();
								enemy5.reset();
								enemy6.reset();
								enemy7.reset();
								enemy8.reset();
								enemy9.reset();
								enemy10.reset();
								enemy11.reset();
								enemy12.reset();
								enemy13.reset();
								enemy14.reset();
								enemy15.reset();
								enemy16.reset();
								enemy17.reset();
								enemy18.reset();
								enemy19.reset();
								enemy20.reset();
								enemy21.reset();
								enemy22.reset();
								enemy23.reset();
								enemy24.reset();
								enemy25.reset();
								enemy26.reset();
								enemy27.reset();
								console.reset();
								l = 1;
								break;
							}
							default:
							{
								cout << "Something went wrong" << endl;

								system("cls");
								break;
							}

							}

						} while (l != 1);
					}
				}
				if (health > 1500)
				{
					gamerun = false;
					
				}
				
				Sleep(75);
	}



	system("cls");
	COORD coord;
	coord.X = 86;
	coord.Y = 21;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "You win!"<<endl;
	coord.X = 86;
	coord.Y = 44;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	_getch();
	return 0;
}
