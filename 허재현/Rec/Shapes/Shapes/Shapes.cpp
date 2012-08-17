// Shapes.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


#include "stdafx.h"


#include <windows.h>
#include "MyRect.h"

void printxy(int x, int y, char ch)

{
	COORD pos={x,y};
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos
		);
	printf("%c", ch);

}


int _tmain(int argc, _TCHAR* argv[])

{
	MyRect rect1;
    rect1.m_x = 0;
	rect1.m_y = 0;
	rect1.m_height=6;
	rect1.m_width=5;
    rect1.Draw();
  /*MyRect rect1;
    rect2.Draw();
    MyRect rect1;
    rect2.Draw();*/

	for (int y= 0; y < 5; y = y+1)
	{
		for(int x = 0; x < 5; x = x + 1)
		{
			printxy(x,y, '*');
			Sleep(0);
		}

	}

}