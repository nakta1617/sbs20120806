// ss.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	int x = 30; 
	for (int y = 15; y >= 0; y = y - 1)
	{
		printxy(x, y, '*');
		Sleep(250);
	}
	*/

	/*
	int m_y = 10;
	for (int y = m_y; y>= 0; y = y - 1)
	{
		printxy(10, y, '*');
		Sleep(150);
	}
	*/

	/*
	int m_y = 15;
	int m_height = 3;
	for (int y = m_y; y > m_y - m_height; y = y - 1)
	{
		printxy(10, y, '*');
		Sleep(150);
	}
	*/

	/*
	int m_y = 15;
	int m_height = 3;
	for (int y = 0; y < m_height; y = y - 1)
	{
		printxy(10, m_y - y, '*');
		Sleep(150);
	}

	int m_x = 15;
	int m_width = 3;
	for (int x = 0; x < m_width; x = x + 1)
	{
		printxy(10, 15, '*');
		Sleep(150);
	}
	*/

	for (int x = 0; x < 5; x = x + 1)
	{
		for (int y = 0; y < 5; y = y + 1)
		{
			printxy(x, y, '*');
		    Sleep(200);
		}
	}

	//문제1
	//가로로 네모칸이 만들어지도록
	// 네모칸 사이즈는 5*6

	//문제2
	//
	//*
	//*  *
	//*  *  *
	//*  *  *  *
	//*  *  *  *  *

	//문제3
	//
	//*  *  *  *  *
	//*  *  *  *
	//*  *  *
	//*  * 
	//*  

	//문제4
	//
	//*  *  *  *  *  *  * 
	//   *  *  *  *  * 
	//      *  *  * 
	//         * 
	

	//문제 5는 문제 4의 반대로

	//문제6
	//*
	//* * 
	//* * *
	//* * * *
	//* * *
	//* *
	//*

	//문제 7은 문제 6의 반대로


	return 0;
}

