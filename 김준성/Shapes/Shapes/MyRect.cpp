#include "StdAfx.h"
#include "MyRect.h"
#include <windows.h>

void printxy(int x,int y,char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", ch);
}

MyRect::MyRect(void)
{
}


MyRect::~MyRect(void)
{
}

void MyRect::Draw()
{
	for (int y = m_y; y < m_y + m_height; y = y + 1)	
	{
		for (int x = m_x; x < m_x + m_width; x = x + 1)
		{
			printxy(x, y, '*');
		}
	}
}