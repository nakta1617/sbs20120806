// ss.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

	//����1
	//���η� �׸�ĭ�� �����������
	// �׸�ĭ ������� 5*6

	//����2
	//
	//*
	//*  *
	//*  *  *
	//*  *  *  *
	//*  *  *  *  *

	//����3
	//
	//*  *  *  *  *
	//*  *  *  *
	//*  *  *
	//*  * 
	//*  

	//����4
	//
	//*  *  *  *  *  *  * 
	//   *  *  *  *  * 
	//      *  *  * 
	//         * 
	

	//���� 5�� ���� 4�� �ݴ��

	//����6
	//*
	//* * 
	//* * *
	//* * * *
	//* * *
	//* *
	//*

	//���� 7�� ���� 6�� �ݴ��


	return 0;
}

