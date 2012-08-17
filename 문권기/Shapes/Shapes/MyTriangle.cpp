#include "StdAfx.h"
#include "MyTriangle.h"
#include <windows.h>


void printxy1(int x, int y,char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("%c",ch);
}


MyTriangle::MyTriangle(void)
{
}


MyTriangle::~MyTriangle(void)
{
}

void MyTriangle::Draw()
{
	for(int y = 0;y<3;y++)
	{
		for(int x= 0;x<y+1;x++)
		{
			printxy1(m_x + x,m_y + y,'*');
		}
	}
}


void MyTriangle:: MoveLeft(int Leftpoint)
{
	//m_x가 0보다 작아지면 안된다.
	if(m_x>0)
		m_x = m_x-Leftpoint;


}

void MyTriangle:: MoveRight(int Rightpoint)
{

	if(m_x+m_width<79)
		m_x = m_x+Rightpoint;
}

void MyTriangle:: MoveUp(int Uppoint)
{
	if(m_y>=0)
		m_y = m_y-Uppoint;
}

void MyTriangle:: MoveDown(int Downpoint)
{
	if(m_y+m_height<20)
		m_y = m_y+Downpoint;
}
