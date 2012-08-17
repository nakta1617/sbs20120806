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

int ProcesKeyboard()
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
	rect3.m_x = 0;
	rect3.m_y = 0;
	rect3.m_width = 7;
	rect3.m_height = 4;

	MyRect rect4;
	rect4.m_x = 5;
	rect4.m_y = 5;
	rect4.m_width = 3;
	rect4.m_height = 3;

	while (true)
	{
		if (VK_UP == ProcesKeyboard())
		{
			rect4.MoveUp();
			//rect4.m_y = rect4.m_y - 1;
		}

		if (VK_DOWN == ProcesKeyboard())
		{
			rect4.MoveDown();
			//rect4.m_y = rect4.m_y + 1;
		}

		if (VK_LEFT == ProcesKeyboard())
		{
			rect4.MoveLeft();
			//rect4.m_x = rect4.m_x - 1;
		}

		if (VK_RIGHT == ProcesKeyboard())
		{
			rect4.MoveRight();
			//rect4.m_x = rect4.m_x + 1;
		}

		for (int i = 0; i < 10; i = i + 1)
		{
			rect3.m_x = rect3.m_x + 1;

			//rect3.Draw();
			rect4.Draw();

			system("cls");
		}
	}

	return 0;
}

