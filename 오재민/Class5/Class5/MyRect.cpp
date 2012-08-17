#include "StdAfx.h"
#include "MyRect.h"
#include <Windows.h>
void printxy2( int x , int y , char ch )
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c" , ch);
}

MyRect::MyRect(void)
{
}


MyRect::~MyRect(void)
{
}

void MyRect::Move()
{	
		if( m_x < 70)
		{
			m_x = rand()%70;
		}
		
		if( m_y < 13)
		{
			m_y = rand()%15;
		}
			
}



void MyRect::Draw()
{

	for( int y = m_y ; y < m_y + m_height ; y++ )
	{
		for( int x = m_x ; x < m_x + m_width ; x++ )
		{
			printxy2(x , y , '*');
			//Sleep(100);
		}
	}
	//for( int y = 10 ; y < 16 ; y++ )
	//{
	//	for( int x = 10 ; x < 15 ; x++ )
	//	{
	//		printxy2(x , y , '*');
	//		Sleep(100);
	//	}
	//}
}
void MyRect::MoveLeft(int x)
{
	if( m_x > 3 )
	{
		m_x = m_x - x;
	}
	else
	{
		m_x = 0;
	}
	
}
void MyRect::MoveRight(int x)
{
	/*if(m_x < m_width - m_x)
	{
		m_x = m_x + 3 ;
	}
	else
	{
		m_x = m_width + m_x ;
	}*/
	m_x = m_x + x;
	if(80 < m_x + m_width )
	{
		m_x = m_x - x ;
	}
}
void MyRect::MoveUp(int x)
{
	if(m_y > 0)
	{
		m_y = m_y - x ;
	}
	else
	{
		m_y = 0;
	}
}
void MyRect::MoveDown(int x)
{
	m_y = m_y + x ;
	
	if( 25 < m_height + m_y)
	{
		m_y = m_y - x ;
	}
}

//void MyRect::MoveLeftDiagonal()
//{
//	m_x = m_x - 3;
//	m_y = m_y - 1;
//}
//void MyRect::MoveRightDiagonal()
//{
//	m_x = m_x + 3 ;
//	m_y = m_y + 1 ;
//}