// Shapes.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "MyRect.h"
#include <windows.h>

MyRect npc1;
MyRect npc2;
MyRect npc3;
MyRect myRect;

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
	//if(::GetAsyncKeyState(VK_SPACE))
	//	return VK_SPACE;

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

void Init()
{
	npc1.m_x = 0;
	npc1.m_y = 0;
	npc1.m_width = 15;
	npc1.m_height = 4;

	npc2.m_x = 0;
	npc2.m_y = 0;
	npc2.m_width = 1;
	npc2.m_height = 1;

	npc3.m_x = 0;
	npc3.m_y = 0;
	npc3.m_width = 2;
	npc3.m_height = 2;

	myRect.m_x = 5;
	myRect.m_y = 5;
	myRect.m_width = 3;
	myRect.m_height = 3;
}

void ProcessKeyboard()
{
	if (VK_LEFT == GetPressedKeyboard())
	{
		myRect.MoveLeft(2);
	}

	if (VK_RIGHT == GetPressedKeyboard())
	{
		myRect.MoveRight(2);
	}

	if (VK_UP == GetPressedKeyboard())
	{
		myRect.MoveUp(2);
	}

	if (VK_DOWN == GetPressedKeyboard())
	{
		myRect.MoveDown(2);
	}
}

void ProcessData()
{
	npc1.MoveRight(1);
	npc2.MoveDown(1);
	npc3.MoveRight(1);
	npc3.MoveDown(1);
}

void Draw()
{
	// 화면 지우기
	system("cls");

	//npc1.Draw();
	//npc2.Draw();
	//npc3.Draw();
	myRect.Draw();
}

int _tmain(int argc, _TCHAR* argv[])
{
	Init();

	while (true)
	{
		ProcessKeyboard();
		ProcessData();
		Draw();
		
		Sleep(100);
	}

	return 0;
}

