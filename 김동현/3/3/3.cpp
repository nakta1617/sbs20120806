// 3.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <windows.h>
#include "Myrect.h"

Myrect npc1;
Myrect npc2;
Myrect npc3;
Myrect myrect;

void printxy2(int x,int y, char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", ch);
}

int  GetPressedKeyboard()
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


void ProcessKeyboard()
{

	if(VK_LEFT == GetPressedKeyboard())
	{
		myrect.MoveLeft(0);
	}
	if(VK_RIGHT == GetPressedKeyboard())
	{
		myrect.MoveRight(0);
	}
	if(VK_UP == GetPressedKeyboard())
	{
		myrect.MoveUp(0);
	}
	if(VK_DOWN == GetPressedKeyboard())
	{
		myrect.MoveDown(0);
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

	system("cls");

	npc1.Draw();
	npc2.Draw();
	npc3.Draw();
	myrect.Draw();
}


int _tmain(int argc, _TCHAR* argv[])
{

	npc1.m_x = 0;
	npc1.m_y = 0;
	npc1.m_width = 5;
	npc1.m_height = 4;
	
	npc2.m_x = 8;
	npc2.m_y = 7;
	npc2.m_width = 1;
	npc2.m_height = 1;

	npc3.m_x = 0;
	npc3.m_y = 0;
	npc3.m_width = 2;
	npc3.m_height = 2;


	myrect.m_x = 5;
	myrect.m_y = 5;
	myrect.m_width = 3;
	myrect.m_height = 3;
	

	while (true)
	{
		ProcessKeyboard();
		ProcessData();
		Draw();


			Sleep(100);
		
	}

	return 0;
}
