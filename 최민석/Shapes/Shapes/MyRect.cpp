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

void MyRect::MoveLeft(int x)
{
	// m_x�� 0���� �۾����� �ȵ˴ϴ�
	m_x = m_x - x;
	if (0 > m_x)
	{
		m_x = m_x + x;
	}
}

void MyRect::MoveRight(int x)
{
	// m_x + m_width�� 80���� Ŀ����
	// �ȵ˴ϴ�
	m_x = m_x + x;

	int rightXPos = m_x + m_width;
	if (60 < rightXPos)
	{
		m_x = m_x - x;
	}
}

void MyRect::MoveUp(int y)
{
	// m_y�� 0���� �۾����� �ȵ˴ϴ�
	m_y = m_y - y;
	if (0 > m_y)
	{
		m_y = m_y + y;
	}
}

void MyRect::MoveDown(int y)
{
	// m_y + m_height�� 19���� Ŀ����
	// �ȵ˴ϴ�
	m_y = m_y + y;

	int bottomPosY = m_y + m_height;
	if (19 < bottomPosY)
	{
		m_y = m_y - y;
	}
}

<<<<<<< .mine
void MyRect::Move1()
{
	m_x=0;
	m_y=0;
}

void MyRect::Move2()
{
	m_x=20;
	m_y=0;
}

void MyRect::Move3()
{
	m_x=20;
	m_y=20;
}

void MyRect::Move4()
{
	m_x=0;
	m_y=20;
}


void MyRect::Draw()
=======
void MyRect::Draw() const
>>>>>>> .r256
{
	for (int y = m_y; y < m_y + m_height; y = y + 1)	
	{
		for (int x = m_x; x < m_x + m_width; x = x + 1)
		{
			printxy(x, y, '*');
		}
	}
}