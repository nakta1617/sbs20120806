// 2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
{/*
	
	for(int y=10;y<=15;y=y+1)
	{
		int x=0;
		printxy(x,y,'*');
	}
	
	for(int y=15;y>=10;y=y-1)
	{
		int x=0;
		printxy(x,y,'*');
	}
	for(int y=15;y>=0;y=y-1)
	{
		int x=0;
		printxy(x,y,'*');
	}
	int m_x=5;
	int m_width=3;
	int m_y=15;
	int m_height =3;
	for(int x=0; x < m_height;y=y-1)
	{
		printxy(10,15,'*');
		Sleep(100);
	}
	//문제1
	for(int x =1; x<=5;x=x+1)
	{
		for(int y=1;y<=6;y=y+1)
		{
			printxy(x,y,'*');
		}
	}
*/
	//문제2
//	for(int x=0;x<=5;x++)
//	{
//		for(int y=0;y<x;y++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
	//문제3
//	for(int x=5;x>=0;x--)
//	{
//		for(int y=0;y<x;y++)
//		{
//			printf("*");
//		}
//			printf("\n");
//	}
	//
	return 0;
}

