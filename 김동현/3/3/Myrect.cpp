#include "StdAfx.h"
#include "Myrect.h"
#include <windows.h>

void printxy(int x,int y, char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", ch);
}


Myrect::Myrect(void)
{
}


Myrect::~Myrect(void)
{
}

void Myrect::Draw()
{
	for (int y = m_y; y < m_y + m_height; y = y + 1)	
	{
		for (int x = m_x; x < m_x + m_width; x = x + 1)
		{
			printxy(x, y, '*');
		}
	}


}

void Myrect::MoveDown(int m_z)
{
	m_y = m_y +m_z;
	if(m_y>20)
	{
		m_y--;
	}
}
void Myrect::MoveLeft(int m_z)
{
	m_x = m_x -m_z;
	if(m_x<0)
	{
		m_x++;
	}
}
void Myrect::MoveRight(int m_z)
{
	m_x = m_x +m_z;
	if(m_x>20)
	{
		m_x--;
	}
	
}
void Myrect::MoveUp(int m_z)
{
	m_y = m_y -m_z;
	if(m_y<0)
	{
		m_y++;
	}
}