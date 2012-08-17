// 44444444.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <windows.h>

void printxy(int x,int y,char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos
		);
	printf("%c", ch);
}
int _tmain(int argc, _TCHAR* argv[])
{
	/*
	MyRectangle Rectangle;
	while (true)
	{
		Rectangle.Draw();
	}
	*/
	 /*
	for (int x = 0; x < 80; x = x + 1)
	{
		printxy(x - 1, 5, ' ');
		printxy(x, 5, '*');
		Sleep(500);
	}
	*/

	/*
	for (int y = 0; y < 6; y = y + 1)
	{
		for (int x = 0; x < 5; x = x + 1)
		{
			printxy(x, y, '*');
			Sleep(100);
		}
	}
	*/

	/*
	for (int y = 0; y < 6; y = y + 1)
	{
		for (int x = 0; x < y; x = x + 1)
		{
			printxy(x, y, '*');
			Sleep(100);
		}
	}
	*/

	/*
	for (int y = 1; y <= 6; y = y + 1)
	{
		for (int x = 1; x <= 7 - y; x = x + 1)
		{
			printxy(x, y, '*');
			Sleep(100);
		}
	}
	*/

	for (int y = 1; y <= 4; y = y + 1)
	{
		for (int x = 4; x > 4 - y; x = x - 1)
		{
			printxy(x, y, '*');
			Sleep(100);
		}
	}




	return 0;
}

