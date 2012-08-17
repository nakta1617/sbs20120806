#include "StdAfx.h"
#include "MyRectangle.h"
#include <windows.h>

MyRectangle::MyRectangle(void)
{
}


MyRectangle::~MyRectangle(void)
{
}
void printxy(int x,int y, char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", ch);
}

void MyRectangle::Draw()
{

	int y=0;

	for(int x=m_1;m_1>=0;m_1=m_1-1)
	{
		y=y+1;
		printxy(m_1,y,'*');

		Sleep(100);
	}
	for(int x=m_2;m_2<=10;m_2=m_2+1)
	{
		y=y+1;
		printxy(m_2,y,'*');
		Sleep(100);
	}

	for(int x=m_3;m_3<=20;m_3=m_3+1)
	{
		y=y-1;
		printxy(m_3,y,'*');
		Sleep(100);
	}
	for(int x=m_4;m_4>10;m_4=m_4-1)
	{
		y=y-1;
		printxy(m_4,y,'*');
		Sleep(100);
	}
}
void MyRectangle::Cancel()
{
	int y=0;

	for(int x=m_1;m_1>=0;m_1=m_1-1)
	{
		y=y+1;
		printxy(m_1,y,'o');

		Sleep(100);
	}
	for(int x=m_2;m_2<=10;m_2=m_2+1)
	{
		y=y+1;
		printxy(m_2,y,'o');
		Sleep(100);
	}

	for(int x=m_3;m_3<=20;m_3=m_3+1)
	{
		y=y-1;
		printxy(m_3,y,'o');
		Sleep(100);
	}
	for(int x=m_4;m_4>10;m_4=m_4-1)
	{
		y=y-1;
		printxy(m_4,y,'o');
		Sleep(100);
	}
}