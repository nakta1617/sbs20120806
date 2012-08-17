#include "StdAfx.h"
#include "MyRect.h"
#include <windows.h>

void printxy(int x,int y,char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos
		);
	printf("%c", ch);
}

MyRect::MyRect(void)
{
}


MyRect::~MyRect(void)
{
}

//void MyRect::Bullet()
//{
	

//}

void MyRect::MoveLeft(int i)
{
	// m_x가 0보다 작아지면 안됩니다
	if(m_x <=2)
		return;
	m_x = m_x - (1+i);
}

void MyRect::MoveRight(int i)
{
	// m_x + m_width가 80보다 커지면
	// 안됩니다
	if(m_x + m_width >50)
		return;
	m_x = m_x + (1+i);
}

void MyRect::MoveUp(int i)
{
	// m_y가 0보다 작아지면 안됩니다
	if(m_y <=2 )
		return;
	m_y = m_y - (1+i);
}

void MyRect::MoveDown(int i)
{
	// m_y + m_height가 20보다 커지면
	// 안됩니다
	if(m_y+m_height >50)
		return;
	m_y = m_y + (1+i);
}

void MyRect::Draw()
{
	for (int y = m_y; y < m_y + m_height; y = y + 1)	
	{
		for (int x = m_x; x < m_x + m_width; x = x + 1)
		{
			
			printxy(x, y, '1');
		}
	}
}