#include "StdAfx.h"
#include "MyRectangle.h"
#include <windows.h>

MyRectangle::MyRectangle(void)
{
}

void MyRectangle::printxy(int x, int y, char ch)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", ch);
}

MyRectangle::~MyRectangle(void)
{
}

void MyRectangle::Draw()
{
	for( int i = 0; i < 5; i = i + 1)
	{
		printxy( 2, i, '*');
		Sleep(100);
	}
	for( int i = 0; i < 5; i = i + 1)
	{
		printxy( 2 + (i * 2 - 1), 4, ' ');
		printxy( 2 + (i * 2), 4, '*');
		Sleep(100);
	}
	for( int i = 0; i < 9; i = i + 1)
	{
		printxy( 13, i, '*');
		Sleep(100);
	}
	for(int i = 0; i < 3; i = i + 1)
	{
		printxy( 13 + (i * 2 - 1), 3, ' ');
		printxy( 13 + (i * 2), 3, '*');
		Sleep(100);
	}
	for( int i = 0; i < 5; i = i + 1)
	{
		printxy( 21, i, '*');
		Sleep(100);
	}
	for( int i = 0; i < 5; i = i + 1)
	{
		printxy(21 + (i * 2 - 1), 4, ' ');
		printxy(21 + (i * 2), 4, '*');
		Sleep(100);
	}
	for( int i = 0; i < 9; i = i + 1)
	{
		printxy(17 + (i * 2 - 1), 6, ' ');
		printxy(17 + (i * 2), 6, '*');
		Sleep(100);
	}
	for( int i = 9; i < 14; i = i + 1)
	{
		printxy( 21, i, '*');
		Sleep(100);
	}
	for( int i = 0; i < 5; i = i + 1)
	{
		printxy(21 + (i * 2 - 1), 13, ' ');
		printxy(21 + (i * 2), 13, '*');
		Sleep(100);
	}

	for( int i = 0; i < 5; i = i + 1)
	{
		printxy( 38, i, '*');
		Sleep(100);
	}

	for( int i = 0; i < 5; i = i + 1)
	{
		printxy( 38 + (i * 2 - 1), 4, ' ');
		printxy( 38 + (i * 2), 4, '*');
		Sleep(100);
	}
	for( int i = 0; i < 9; i = i + 1)
	{
		printxy( 49, i, '*');
		Sleep(100);
	}
	for(int i = 0; i < 3; i = i + 1)
	{
		printxy( 49 + (i * 2 - 1), 3, ' ');
		printxy( 49 + (i * 2), 3, '*');
		Sleep(100);
	}
	for(int i = 0; i < 5; i = i + 1)
	{
		printxy(60, i, '*');
		Sleep(100);
	}
	for(int i = 0; i < 5; i = i + 1)
	{
		printxy(68, i, '*');
		Sleep(100);
	}
	for( int i = 0; i < 5; i = i + 1)
	{
		printxy( 60 + (i * 2 - 1), 2, ' ');
		printxy( 60 + (i * 2), 2, '*');
		Sleep(100);
	}
	for( int i = 0; i < 5; i = i + 1)
	{
		printxy( 60 + (i * 2 - 1), 4, ' ');
		printxy( 60 + (i * 2), 4, '*');
		Sleep(100);
	}
	for( int i = 0; i < 9; i = i + 1)
	{
		printxy( 72, i, '*');
		Sleep(100);
	}

	printxy(60, 9, '*');
	printxy(57, 9, '*');
	printxy(56, 8, '*');
	printxy(61, 8, '*');
	printxy(55, 9, '*');
	printxy(62, 9, '*');
	printxy(62, 10, '*');
	printxy(62, 11, '*');
	printxy(62, 12, '*');
	printxy(55,	10, '*');
	printxy(55, 11, '*');
	printxy(55, 12, '*');
	printxy(56, 13, '*');
	printxy(61, 13, '*');
	printxy(60, 12, '*');
	printxy(57, 12, '*');
	Sleep(300);

	printxy(35, 20, ' ');
}