// Rectangle.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


#include <windows.h>


void printxy(int x, int y, char ch)

{
	COORD pos={x,y};
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos
		);
	printf("%c", ch);

}


int _tmain(int argc, _TCHAR* argv[])
{
	for (int y= 0; y < 5; y = y+1)
	{
		for(int x = 0; x < 5; x = x + 1)
		{
			printxy(x,y, '*');
			Sleep(100);
		}

}

}