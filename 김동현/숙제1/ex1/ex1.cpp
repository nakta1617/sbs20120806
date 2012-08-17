// ex1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <windows.h>
#include "MyRectangle.h"
/*
void printxy(int x,int y, char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", ch);
}*/
int _tmain(int argc, _TCHAR* argv[])
{

		MyRectangle Rectangle1;
		MyRectangle Rectangle2;

		Rectangle1.m_1 = 10;
		Rectangle1.m_2 = 1;
		Rectangle1.m_3 = 11;
		Rectangle1.m_4 = 19;
		
		Rectangle2.m_1 = Rectangle1.m_1+20;
		Rectangle2.m_2 = Rectangle1.m_2+20;
		Rectangle2.m_3 = Rectangle1.m_3+20;
		Rectangle2.m_4 = Rectangle1.m_4+20;
		
		while(1)
		{
			Rectangle1.Draw();
			Rectangle2.Cancel();
		}

	return 0;
}

