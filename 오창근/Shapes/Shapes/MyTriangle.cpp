#include "StdAfx.h"
#include "MyTriangle.h"
#include <windows.h>

void printxy3(int x,int y,char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos
		);
	printf("%c", ch);
}

MyTriangle::MyTriangle(void)
{
}


MyTriangle::~MyTriangle(void)
{
}

void MyTriangle::Draw()
{
	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < y + 1; ++x)
		{
			printxy3(m_x + x, m_y + y, '*');
		}
	}
}