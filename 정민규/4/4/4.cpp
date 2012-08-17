// 4.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <windows.h>
#include "MyRectangle.h"
/*
void printxy(int x, int y, char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", ch);
}
*/
int _tmain(int argc, _TCHAR* argv[])
{
	/*
	int j=1;
	int k=1;
	
	
	
	for(int i =1;i<50 ;i ++)
	{
		
		//printxy(i-1,i, '*');
		while(j<20)
		{		
			printxy(1,j, '*');
			printxy(50,j,'*');
			printxy(j,j,'*');
			Sleep(100);
			j++;
		
		}

		
		printxy(i,1,'*');
		printxy(i,20,'*');
	
		Sleep(100);

	}
	*/
	
	MyRectangle rectangle1;
	MyRectangle rectangle2;

	/*
	rectangle1.m_x;
	rectangle1.m_y;
	rectangle1.m_width;
	rectangle1.m_height;
	*/




	
	
	while(1)
	{
		rectangle1.Draw();
	}
	//printxy(10,10, '*');
	return 0;
}

