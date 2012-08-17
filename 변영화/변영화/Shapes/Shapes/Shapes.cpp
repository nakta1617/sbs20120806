// Shapes.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
// 클래스를 짤때는 그 클래스의 동작만 생각한다. 
// 자신이 조종하는 사각형 1개와 자동으로 움직이는 사각형 1개를 구현하자 < 완료 >
// 스페이스를 누르면 사각형이 생기도록 한다 < 완료 >
// 다른 키를 누르면 삼각형 등 다른 도형을 만들자 < 완료 >


#include "stdafx.h"
#include <Windows.h>
#include "MyRect.h"
#include "Shapes.h"
#include "MyTriangle.h"
#include <vector>

using namespace std;

MyRect npc1, npc2, rect3, myRect;
vector<MyRect> npcs;
vector<MyTriangle> triangles;

int gX = 0, gY = 0, gWidth = 3, gHeight = 3;
int NemoOSemo;
void printxy2(int x, int y, char ch)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", ch);
}

int _tmain(int argc, _TCHAR* argv[])
{
//	int iTempX, iTemp = 1;
//	init();
	while(true) {
		system("cls");
		ProcessData();
		ProcessKeyboard();
		Draw();
		/*
		iTempX = (rect3.m_x + rect3.m_width);
		rect3.m_x =  rect3.m_x + ( 1 * iTemp );
		if( iTempX > 80 )
		{
			rect3.m_y++;
			iTemp = -1;
		}
		if( iTempX == rect3.m_width )
		{
			rect3.m_y++;
			iTemp = 1;
		}
		if( rect3.m_y > 20)
		{
			rect3.m_x = 2;
			rect3.m_y = 0;
		}
		//rect3.m_y++;
		*/
	}
	return 0;
}

void npcinit(int x, int y, int width, int height)
{
	MyRect npc;
	npc.m_x = x;
	npc.m_y = y;
	npc.m_width = width;
	npc.m_height = height;

	npcs.push_back(npc);
}

void init()
{
	/*
	npc1.m_x = 3;
	npc1.m_y = 5;
	npc1.m_width = 5;
	npc1.m_height = 6;
	npcs.push_back(npc1);

	npc2.m_x = 13;
	npc2.m_y = 17;
	npc2.m_width = 5;
	npc2.m_height = 6;
	npcs.push_back(npc2);

	
	rect3.m_x = 2;
	rect3.m_y = 0;
	rect3.m_width = 5;
	rect3.m_height = 5;
	
	myRect.m_x = 2;
	myRect.m_y = 1;
	myRect.m_width = 5;
	myRect.m_height = 6;
	*/
}

void ProcessData()
{
	//npc1.MoveRight();
	//npc2.MoveDown();
	for(int i = 0; i < npcs.size(); ++i)
	{
		npcs[i].MoveRight(1);                
	}
}
void Draw()
{
	//npc1.Draw();
	//npc2.Draw();
	//rect3.Draw();
	//myRect.Draw();
	for(int i = 0; i < npcs.size(); ++i)
	{
		npcs[i].Draw();                
	}

	for(int i = 0; i < triangles.size(); ++i)
	{
		triangles[i].Draw();                // 벡터 npcs는 클래스 MyRect와 동일하게 함수를 불러올 수 있다 ( npcs의 자료형이 MyRect 이기 때문 )
	}
}

int GetPressedKeyboard()
{
	if(::GetAsyncKeyState(VK_LEFT))
		return VK_LEFT;
	if(::GetAsyncKeyState(VK_RIGHT))
		return VK_RIGHT;
	if(::GetAsyncKeyState(VK_UP))
		return VK_UP;
	if(::GetAsyncKeyState(VK_DOWN))
		return VK_DOWN;
	if(::GetAsyncKeyState(VK_SPACE))
		return VK_SPACE;
	if(::GetAsyncKeyState(VK_RETURN))
		return VK_RETURN;
	if(::GetAsyncKeyState(VK_LBUTTON))
		return VK_LBUTTON;
}

void ProcessKeyboard()
{
	if (VK_LEFT == GetPressedKeyboard())
	{
		myRect.MoveLeft(2);
	}

	if (VK_RIGHT == GetPressedKeyboard())
	{
		myRect.MoveRight(3);
	}

	if (VK_UP == GetPressedKeyboard())
	{
		myRect.MoveUp(2);
	}

	if (VK_DOWN == GetPressedKeyboard())
	{
		myRect.MoveDown(4);
	}
	if (VK_SPACE == GetPressedKeyboard())
	{
		npcinit(gX, gY, gWidth, gHeight);
		gX += 8;
		if( gX > 60)
		{
			gY += 4;
			gX = 0;
		}
	}
	if( VK_LBUTTON == GetPressedKeyboard())
	{
		MyTriangle triangle;
		triangle.m_x = 15;
		triangle.m_y = 3;
		triangle.m_height = 5;

		triangles.push_back(triangle);
	}
}
