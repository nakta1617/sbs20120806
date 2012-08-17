#include "StdAfx.h"
#include "MyRect.h"
#include <windows.h>

void printxy(int x, int y,char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("%c",ch);
}




MyRect::MyRect(void)
{
}


MyRect::~MyRect(void)
{
}




void MyRect::Draw()
{
	for(int y=m_y;y<m_y+m_height;y++)
	{
		for(int x= m_x;x<m_x + m_width;x++)
		{
			printxy(x,y,'*');

		}

	}
}

	
	void MyRect:: MoveLeft(int Leftpoint)
	{
		//m_x가 0보다 작아지면 안된다.
		if(m_x>0)
		m_x = m_x-Leftpoint;
		
	
	}

	void MyRect:: MoveRight(int Rightpoint)
	{
		
		if(m_x+m_width<79)
		m_x = m_x+Rightpoint;
	}

	void MyRect:: MoveUp(int Uppoint)
	{
		if(m_y>=0)
		m_y = m_y-Uppoint;
	}

	void MyRect:: MoveDown(int Downpoint)
	{
		if(m_y+m_height<20)
		m_y = m_y+Downpoint;
	}
	


