// blockbuster.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <windows.h>

void printxy(int x,int y, char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", ch);
}

int _tmain(int argc, _TCHAR* argv[])
{
	for(int i=0;i<25;i++)
	{
		printxy(i-1,2,' ');
		printxy(i,2,'o');
		if(i==24)
		{
			printxy(i,1,'o');
		}
		Sleep(500);
	}

	return 0;
}

