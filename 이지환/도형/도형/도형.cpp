// 도형.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <windows.h>
#include "MyRect.h"
void printxy2(int x,int y,char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
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
	
	MyRect rect2;
	rect2.m_x = 8;
	rect2.m_y = 7;
	rect2.m_width = 7;
	rect2.m_height = 9;

	MyRect rect3;
	rect3.m_x = 0;
	rect3.m_y = 0;
	rect3.m_width = 7;
	rect3.m_height = 4;

    MyRect myRect;
	myRect.m_x = 5;
	myRect.m_y = 5;
	myRect.m_width = 3;
	myRect.m_height = 3;


	
	while (true)
	{
		system("cls");
		if (VK_LEFT == ProcesKeyboard())
		{
			myRect.MoveLeft();
			//myRect.m_x = myRect.m_x - 1;
		}

		if (VK_RIGHT == ProcesKeyboard())
		{
			myRect.MoveRight();
			//myRect.m_x = myRect.m_x + 1;
		}

		if (VK_UP == ProcesKeyboard())
		{
			myRect.MoveUp();
			//myRect.m_y = myRect.m_y - 1;
		}

		if (VK_DOWN == ProcesKeyboard())
		{
			myRect.MoveDown();
			//myRect.m_y = myRect.m_y + 1;
		}

		rect1.MoveRight();
		rect1.Draw();
		rect2.MoveDown();
		rect2.Draw();
		rect3.MoveRight();
		rect3.MoveDown();
		rect3.Draw();
		myRect.Draw();

		Sleep(300);

		for (int i = 0; i < 10; i = i + 1)
		{
			rect3.m_x = rect3.m_x + 1;

			//rect3.Draw();
			myRect.Draw();

		}
	}
	







			/*

	while (true)
	{
		for (int i = 0; i < 10; i = i + 1)
		{
			rect3.m_x = rect3.m_x + 1;

			myRect.m_x = myRect.m_x + 1;
			myRect.m_y = myRect.m_y + 1;

			rect3.Draw();
			myRect.Draw();

			Sleep(300);
			system("cls");
		}
	}
		*/

	return 0;
}

