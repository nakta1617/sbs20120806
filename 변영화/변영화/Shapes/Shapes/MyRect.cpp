#include "StdAfx.h"
#include "MyRect.h"
#include <windows.h>

void printxy(int x, int y, char ch)
{
	COORD pos = {x,y};
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
	for(int y = m_y; y < (m_y + m_height); y++)
	{
		for(int x = m_x; x < (m_x + m_width); x++)
		{
			printxy(x, y, '*');
		}
		printf("\n");
	}
}

void MyRect::MoveLeft(int Move)
{
	m_x -= Move;
}

void MyRect::MoveRight(int Move)
{
	if( m_x + m_width > 79)
	{
		Move = 0;
	}
	m_x += Move;
}

void MyRect::MoveUp(int Move)
{
	m_y -= Move;
}

void MyRect::MoveDown(int Move)
{
	m_y += Move;
}