// blockbuster.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <windows.h>

void printxy(int x, int y, char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", ch);
}

int _tmain(int argc, _TCHAR* argv[])
{
	/*
	printxy(1, 1, '*');
	printxy(2, 2, '*');
	printxy(3, 3, '*');
	printxy(4, 4, '*');
	printxy(5, 5, '*');
	printxy(6, 6, '*');
	printxy(7, 7, '*');
	printxy(8, 8, '*');
	printxy(9, 9, '*');
	printxy(10, 10, '*');*/
	/*
	for (int x = 0; x < 80; x = x + 1 )
	{
		for (int y = 0; y < 25; y = y +1)
		{
			printxy(x, y, '*');
			Sleep(5);
		}
	}

	int m_x = 5;
	int m_width = 3;
	int m_y = 15;
	int m_height = 3;
	for (int y = 0; y > m_y - m_height; y = y - 1)
	{
		printxy(0, y, '*');
		Sleep(100);
	} 

	for (int x = 0; x < 5; x = x + 1)
	{
		for (int y = 0; y < 5; y = y + 1)
		{
			printxy(x, y, '*');
			Sleep(5);
		}
	} 

	 문제 1.
	 가로로 네모칸이 만들어지도록.
	 네모칸은 size : 5*6

	 문제 2.
	 *
	 * *
	 * * *
	 * * * *
	 * * * * *
	 * * * * * *

	 찍기

	 문제 3.

	 * * * * * *
	 * * * * *
	 * * * *
	 * * *
	 * * 
	 *

	 문제 4.

	     *
	   * * *	
      * * * *
	 * * * * * 
	* * * * * *

	문제 5.
	* * * * * *
	 * * * * *
	  * * * *
	   * * *
	    * * 
		 *

	문제 6.

	*
	* *
	* * *
	* * * *
	* * * * *
	* * * *
	* * *
	* * 
	*

	문제 7.

	        *
		  * *
		* * *
	  * * * *
	* * * * *
	  * * * *
	    * * *
		  * *
		    *

			*/
	return 0;
}

