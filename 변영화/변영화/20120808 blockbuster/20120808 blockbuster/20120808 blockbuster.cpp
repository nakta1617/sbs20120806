// 20120808 blockbuster.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <windows.h>
#include "MyRectangle.h"

/*void printxy(int x, int y, char ch)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", ch);
}*/
int _tmain(int argc, _TCHAR* argv[])
{
	MyRectangle rect;
	/*
	for(int i = 10; i <= 15; i=i+1)
	{
		rect.printxy(10, i, '*');
		Sleep(30);
	}
	for(int i = 10; i >= 0; i=i-1)
	{
		rect.printxy(15, i, '*' );
		Sleep(30);
	}
	for(int i = 15; i >= 0; i=i-1)
	{
		rect.printxy(0, i, '*');
		Sleep(30);
	}*/

	/*
	int x = 10;
	for(int y = 15; y >= 0; y = y - 1)
	{
		rect.printxy(x, y, '*');
		Sleep(30);
	}
	*/

	/*
	int mY = 15;
	int mHeight = 3;
	for( int y = mY; y > (mY - mHeight); y = y - 1)
	{
		rect.printxy(10, y, '*');
		Sleep(50);
	}
	*/

	/*
	int mX = 5;
	int mWidth = 3;
	int mY = 15;
	int mHeight = 3;
	for( int y = 0; y < mWidth; y++)
	{
		rect.printxy(10 - y, 15, '*');
		Sleep(50);
	}
	*/

	/*
	for( int x = 0; x < 5; x = x + 1)
	{
		for( int y = 0; y < 5; y = y + 1)
		{
			rect.printxy(x, y, '*');
			Sleep(1000);
		}
	}
	*/

	
	for(int i = 1; i <= 5; i++)
	{
		for(int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for(int i = 5; i >= 0; i--)
	{
		for(int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	// 문제 1. 가로로 네모칸이 만들어지도록 네모칸 사이즈는 5*6
	// 문제 2.
	//		*
	//		* *
	//		* * *
	//		* * * *
	//		* * * * *

	// 문제 3.
	//		* * * * *
	//		* * * *
	//		* * *
	//		* *
	//		*

	// 문제 4.
	//			*
	//		  * * *
	//		* * * * *
	//	  * * * * * * *

	// 문제 5
	//	  * * * * * * *
	//		* * * * *
	//		  * * *
	//			*

	// 문제 6
	//	*
	//	* *
	//	* * *
	//	* * * *
	//	* * * * *
	//	* * * *
	//	* * *
	//	* *
	//	*

	// 문제 7
	//			*
	//		  * *
	//		* * *
	//	  * * * *
	//	* * * * *
	//	  * * * *
	//		* * *
	//		  * *
	//			*
	/*
	MyRectangle rectangle1;
	MyRectangle rectangle2;
	rectangle1.m_x = 0;
	rectangle1.m_y = 0;
	rectangle1.m_width = 10;
	rectangle1.m_height = 10;

	rectangle2.m_x = 6;
	rectangle2.m_y = 4;
	rectangle2.m_width = 5;
	rectangle2.m_height = 4;

	while(true) {
		rectangle1.Draw();
		rectangle2.Draw();
		system("cls");
	}
	*/
}

