// mintuck.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
	// ���ʿ��� �����ʱ��� �̵�
	for (int x = 0; x < 80; x = x + 1)
	{
		printxy(x - 1, 1, ' ');
		printxy(x, 1, '*');
		
		Sleep(500);
	}

	// ������ �� ������ �Ʒ����� �̵�
	for (int x = 0; x < 80; x = x + 1)
	{
		printxy(x  -1, -1, ' ');
		printxy(x, 1, '*');

		Sleep(500);
	}


	/*
	printxy(1, 1, '*');
	printxy(2, 2, '*');
	printxy(3, 3, '*');
	printxy(4, 4, '*');
	printxy(5, 5, '*');
	printxy(6, 6, '*');
	printxy(7, 7, '*');
	printxy(8, 8, '*');
	printxy(9, 9, '*');
	printxy(10, 10, '*');
	*/
	return 0;
}
