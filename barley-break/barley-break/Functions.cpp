#include <iostream>
#include <time.h>
#include <conio.h>
#include <Windows.h>
using namespace std;

int zeroY, zeroX, key;
int EasyField[3][3] = {};
int NormalField[4][4] = {};

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
void complexityMenu();

void NormalInitilization()
{
	int  x , y , num = 0;
	srand(time(0));
	while (num <= 15)
	{
		x = rand() % 4; y = rand() % 4;
		if (NormalField[y][x] == 0 )
		{
			NormalField[y][x] = num;
			num++;
		}
	}
}
void NormalDraw()
{
	system("cls");
	SetConsoleTextAttribute(h,14);
	SetConsoleCursorPosition(h, { 10,4 });
	cout << " ____   __   ____  __    ____  _  _     ____  ____  ____   __   __ _ ";
	SetConsoleCursorPosition(h, { 10,5 });
	cout << "(  _ \\ / _\\ (  _ \\(  )  (  __)( \\/ )___(  _ \\(  _ \\(  __) / _\\ (  / )";
	SetConsoleCursorPosition(h, { 10,6 });
	cout << " ) _ (/    \\ )   // (_/\\ ) _)  )  /(___)) _ ( )   / ) _) /    \\ )  ( ";
	SetConsoleCursorPosition(h, { 10,7 });
	cout << "(____/\\_/\\_/(__\\_)\\____/(____)(__/     (____/(__\\_)(____)\\_/\\_/(__\\_)";

	int positionX = 38 , positionY = 10;
	SetConsoleTextAttribute(h, 15);
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			SetConsoleCursorPosition(h, { short(positionX),short(positionY) });
			if (NormalField[j][i] == 0)
			{
				SetConsoleTextAttribute(h,14);
				cout << char(219) << char(219);
				zeroY = j; zeroX = i;
				SetConsoleTextAttribute(h, 15);
			}
			else
			{
				cout << NormalField[j][i];
			}
			positionX+=4;
		}
		positionX = 38;
		positionY+=2;
	}
}
void NormalMove()
{
	int box;
	key = getch();
	if (key == 224)
	{
		key = getch();
		if (key == 72 && zeroY > 0)
		{
			box = NormalField[zeroY - 1][zeroX];
			NormalField[zeroY - 1][zeroX] = 0;
			NormalField[zeroY][zeroX] = box;
		}
		if (key == 80 && zeroY < 4-1 )
		{
			box = NormalField[zeroY + 1][zeroX];
			NormalField[zeroY + 1][zeroX] = 0;
			NormalField[zeroY][zeroX] = box;
		}
		if (key == 77 && zeroX < 4 - 1)
		{
			box = NormalField[zeroY][zeroX + 1];
			NormalField[zeroY][zeroX + 1] = NormalField[zeroY][zeroX];
			NormalField[zeroY][zeroX ] = box;
		}
		if (key == 75 && zeroX > 0)
		{
			box = NormalField[zeroY][zeroX - 1];
			NormalField[zeroY][zeroX - 1] = NormalField[zeroY][zeroX];
			NormalField[zeroY][zeroX] = box;
		}
	}
	if (key == 27)
	{
		complexityMenu();
	}
}
void EasyInitilization()
{
	int  x, y, num = 0;
	srand(time(0));
	while (num <= 8)
	{
		x = rand() % 3; y = rand() % 3;
		if (EasyField[y][x] == 0)
		{
			EasyField[y][x] = num;
			num++;
		}
	}
}
void EasyDraw()
{
	system("cls");
	SetConsoleTextAttribute(h, 14);
	SetConsoleCursorPosition(h, { 10,4 });
	cout << " ____   __   ____  __    ____  _  _     ____  ____  ____   __   __ _ ";
	SetConsoleCursorPosition(h, { 10,5 });
	cout << "(  _ \\ / _\\ (  _ \\(  )  (  __)( \\/ )___(  _ \\(  _ \\(  __) / _\\ (  / )";
	SetConsoleCursorPosition(h, { 10,6 });
	cout << " ) _ (/    \\ )   // (_/\\ ) _)  )  /(___)) _ ( )   / ) _) /    \\ )  ( ";
	SetConsoleCursorPosition(h, { 10,7 });
	cout << "(____/\\_/\\_/(__\\_)\\____/(____)(__/     (____/(__\\_)(____)\\_/\\_/(__\\_)";

	int positionX = 42, positionY = 10;
	SetConsoleTextAttribute(h, 15);
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			SetConsoleCursorPosition(h, { short(positionX),short(positionY) });
			if (EasyField[j][i] == 0)
			{
				SetConsoleTextAttribute(h, 14);
				cout << char(219) << char(219);
				zeroY = j; zeroX = i;
				SetConsoleTextAttribute(h, 15);
			}
			else
			{
				cout << EasyField[j][i];
			}
			positionX += 4;
		}
		positionX = 42;
		positionY += 2;
	}
}
void EasyMove()
{
	int box;
	key = getch();
	if (key == 224)
	{
		key = getch();
		if (key == 72 && zeroY > 0)
		{
			box = EasyField[zeroY - 1][zeroX];
			EasyField[zeroY - 1][zeroX] = 0;
			EasyField[zeroY][zeroX] = box;
		}
		if (key == 80 && zeroY < 3 - 1)
		{
			box = EasyField[zeroY + 1][zeroX];
			EasyField[zeroY + 1][zeroX] = 0;
			EasyField[zeroY][zeroX] = box;
		}
		if (key == 77 && zeroX < 3 - 1)
		{
			box = EasyField[zeroY][zeroX + 1];
			EasyField[zeroY][zeroX + 1] = EasyField[zeroY][zeroX];
			EasyField[zeroY][zeroX] = box;
		}
		if (key == 75 && zeroX > 0)
		{
			box = EasyField[zeroY][zeroX - 1];
			EasyField[zeroY][zeroX - 1] = EasyField[zeroY][zeroX];
			EasyField[zeroY][zeroX] = box;
		}
	}
	if (key == 27)
	{
		complexityMenu();
	}
}
void complexityMenu()
{
	int selected = 0;
	int key;
	while (true)
	{
		system("cls");
		SetConsoleTextAttribute(h, 14);
		SetConsoleCursorPosition(h, { 0,0 });
		cout << " __  __  _____  ____  ____     ";
		SetConsoleCursorPosition(h, { 0,1 });
		cout << "(  \\/  )(  _  )(  _ \\( ___)  ()";
		SetConsoleCursorPosition(h, { 0,2});
		cout << " )    (  )(_)(  )(_) ))__)     ";
		SetConsoleCursorPosition(h, { 0,3 });
		cout << "(_/\\/\\_)(_____)(____/(____)  ()";
		SetConsoleTextAttribute(h, 10 | 2);
		if (selected == 0)
			SetConsoleTextAttribute(h, 12);
		SetConsoleCursorPosition(h, { 8,7 });
		cout << " ____    __    ___  _  _ ";
		SetConsoleCursorPosition(h, { 8,8 });
		cout << "( ___)  /__\\  / __)( \\/ )";
		SetConsoleCursorPosition(h, { 8,9 });
		cout << " )__)  /(__)\\ \\__ \\ \\  / ";
		SetConsoleCursorPosition(h, { 8,10 });
		cout << "(____)(__)(__)(___/ (__) ";
		SetConsoleTextAttribute(h, 10 | 2);
		if (selected == 1)
			SetConsoleTextAttribute(h, 12);
		SetConsoleCursorPosition(h, { 0,12 });
		cout << " _  _  _____  ____  __  __    __    __   ";
		SetConsoleCursorPosition(h, { 0,13 });
		cout << "( \\( )(  _  )(  _ \\(  \\/  )  /__\\  (  )  ";
		SetConsoleCursorPosition(h, { 0,14 });
		cout << " )  (  )(_)(  )   / )    (  /(__)\\  )(__ ";
		SetConsoleCursorPosition(h, { 0,15 });
		cout << "(_)\\_)(_____)(_)\\_)(_/\\/\\_)(__)(__)(____)";
		SetConsoleTextAttribute(h, 10 | 2);
		if (selected == 2)
			SetConsoleTextAttribute(h, 12);
		SetConsoleCursorPosition(h, { 7,17 });
		cout << " _   _    __    ____  ____  ";
		SetConsoleCursorPosition(h, { 7,18 });
		cout << "( )_( )  /__\\  (  _ \\(  _ \\ ";
		SetConsoleCursorPosition(h, { 7,19 });
		cout << " ) _ (  /(__)\\  )   / )(_) )";
		SetConsoleCursorPosition(h, { 7,20 });
		cout << "(_) (_)(__)(__)(_)\\_)(____/ ";
		SetConsoleTextAttribute(h, 10 | 2);
		key = getch();
		if (key == 224)
		{
			key = getch();
			if (key == 72 && selected > 0)
				selected--;
			else if (key == 80 && selected < 2)
				selected++;
		}
		if (key == 13)
		{
			system("cls");
			if (selected == 0)
			{
				EasyInitilization();
				while (true)
				{
					EasyDraw();
					EasyMove();
				}
			}
			if (selected == 1)
			{
				NormalInitilization();
				while (true)
				{
					NormalDraw();
					NormalMove();
				}
			}
		}
	}
}

