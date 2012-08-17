// Shapes.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "MyRect.h"
#include <windows.h>

void printxy2(int x,int y,char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos
		);
	printf("%c", ch);
}

int GetPressedKeyboard()
{
	if (::GetAsyncKeyState(VK_LEFT))
		return VK_LEFT;

	if (::GetAsyncKeyState(VK_RIGHT))
		return VK_RIGHT;

	if (::GetAsyncKeyState(VK_UP))
		return VK_UP;

	if (::GetAsyncKeyState(VK_DOWN))
		return VK_DOWN;

	return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	MyRect rect1;
	rect1.m_x = 2;
	rect1.m_y = 2;
	rect1.m_width = 15;
	rect1.m_height = 4;
	rect1.Draw();
	
	MyRect rect2;
	rect2.m_x = 8;
	rect2.m_y = 7;
	rect2.m_width = 7;
	rect2.m_height = 9;
	rect2.Draw();

	MyRect rect3;
	rect3.m_x = 15;
	rect3.m_y = 0;
	rect3.m_width = 3;
	rect3.m_height = 3;

	MyRect rect4;
	rect4.m_x = 20;
	rect4.m_y = 20;
	rect4.m_width = 3;
	rect4.m_height = 3;

	while (true)
	{
		
		if (VK_LEFT == GetPressedKeyboard())
		{
			rect4.MoveLeft();
		}

		if (VK_RIGHT == GetPressedKeyboard())
		{
			rect4.MoveRight();
		}

		if (VK_UP == GetPressedKeyboard())
		{
			rect4.MoveUp();
		}

		if (VK_DOWN == GetPressedKeyboard())
		{
			rect4.MoveDown();
		}

	       rect1.MoveLeft();
		   rect1.Draw();

			
		   rect4.Draw();
		   sleep(300);
           system("cls");

		
		
		



	}
	
	
	return 0;
}

