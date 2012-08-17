// Class5.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>
#include "MyTriangle.h"
#include "MyRect.h"
#include "Class5.h"
#include <vector>
using namespace std;

vector<MyRect> NPC;
vector<MyTriangle> Triangles;
int NPCI = 0 , NPCJ = 0 , NPCW = 0 , NPCH = 0;
int CurrentTriangleX = 1 , CurrentTriangleY = 1 , CurrentTriangleH = 1 ;

void printxy( int x , int y , char ch )
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c" , ch);
}


	MyRect NPC1;
	MyRect NPC2;
	MyRect NPC3;
	MyRect NPC4;
	MyRect Myrect;

int _tmain(int argc, _TCHAR* argv[])
{
	Init();
	
	while(true)
	{
		ProcessKeyboard();
		ProcessData();
		Draw();
		

		//NPC3.m_x = NPC3.m_x + 1 ;
		//MyRect.m_x = MyRect.m_x + 1 ;
		//MyRect.m_y = MyRect.m_y + 1 ;
		//NPC3.Drow();
		Sleep(300);
		system("cls");//화면 지우기
	}

	
	//NPC2.Drow();
	//NPC1.Drow();



	//NPC2.Drow();



	//for( int y = 0 ; y < 6 ; y++ )
	//{
	//	for( int x = 0 ; x < 6 ; x++ )
	//	{
	//		printxy(x , y , '*');
	//		Sleep(100);
	//	}
	//}
	return 0;
}
//숙제-----------------------------------------------------------------------------------
//예습부분 함수 리턴값 인자
//NPC3이 내가움직이는것과 상관없이 독립적으로 알아서 움직이게 만들어라 내가움직이는것 제외한 하나

void Init()
{
	NPC1.m_x = 20;
	NPC1.m_y = 20;
	NPC1.m_width = 2;
	NPC1.m_height = 2;

	NPC2.m_x = 10;
	NPC2.m_y = 10;
	NPC2.m_width = 2;
	NPC2.m_height = 2;

	NPC3.m_x = 15;
	NPC3.m_y = 15;
	NPC3.m_width = 2;
	NPC3.m_height = 2;

	NPC4.m_x = 15;
	NPC4.m_y = 12;
	NPC4.m_width = 2;
	NPC4.m_height = 2;

	Myrect.m_x = 40;
	Myrect.m_y = 10;
	Myrect.m_width = 2;
	Myrect.m_height = 2;
}

int GetProcesKeyboard()
{

	//if(::GetAsyncKeyState(VK_LEFT)&&::GetAsyncKeyState(VK_UP))
	//	return LU;//대각선 이동


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

	if(::GetAsyncKeyState(VK_LBUTTON))
		return VK_LBUTTON;
	

	return 0;
}

void ProcessKeyboard()
{
	if(::GetAsyncKeyState(VK_LEFT))//대각선이동가능 왜? 키보드 프로세서로 클래스만들어서 빼보기 VK_LEFT == GetProcesKeyboard
	{	
		//NPC2.MoveLeft();
		Myrect.MoveLeft(5);
		//MyRect.m_x = MyRect.m_x - 3 ;
	}
	if(::GetAsyncKeyState(VK_RIGHT))
	{
		//NPC2.MoveRight();
		Myrect.MoveRight(5);
		//MyRect.m_x = MyRect.m_x + 3 ;
	}
	if(::GetAsyncKeyState(VK_UP))
	{
		//NPC2.MoveUp();
		Myrect.MoveUp(3);
		//MyRect.m_y = MyRect.m_y - 1 ;
	}
	if(::GetAsyncKeyState(VK_DOWN))
	{
		//NPC2.MoveDown();
		Myrect.MoveDown(3);
		//MyRect.m_y = MyRect.m_y + 1 ;
	}
	if(::GetAsyncKeyState(VK_SPACE))
	{
		MyRect npc;
		npc.m_x = NPCI;
		npc.m_y = NPCJ;
		npc.m_width = NPCW;
		npc.m_height= NPCH;

		if(npc.m_x < 75)
		{
			NPCI += 2 ;
		}
		else
		{
			NPCI -= rand()%74;
		}

		if(npc.m_y < 16)
		{
			NPCJ+=3;
		}
		else
		{
			NPCJ -= rand()%15;
		}

		if(npc.m_width < 5)
		{
			NPCW++;
		}
		else
		{
			NPCW -= rand()%4;
		}

		if(npc.m_height < 5)
		{
			NPCH++;
		}
		else
		{
			NPCH -= rand()%4;
		}

		NPC.push_back(npc);
	}
	if(::GetAsyncKeyState(VK_LBUTTON))
	{

		MyTriangle triangle;
		
		triangle.m_x = CurrentTriangleX;
		triangle.m_y = CurrentTriangleY;
		triangle.m_height= CurrentTriangleH;

		Triangles.push_back(triangle);


		if(triangle.m_x < 75)
		{
			CurrentTriangleX += 2 ;
		}
		else
		{
			CurrentTriangleX -= rand()%74;
		}

		if(triangle.m_y < 16)
		{
			CurrentTriangleY += 3;
		}
		else
		{
			CurrentTriangleY -= rand()%15;
		}

		if(triangle.m_height < 5)
		{
			CurrentTriangleH ++;
		}
		else
		{
			CurrentTriangleH -= rand()%4;
		}
	}

}
void ProcessData()
{ 
	NPC2.m_x = NPCI;
	NPC2.m_y = NPCJ;
	NPC2.m_width = NPCW;
	NPC2.m_height= NPCH;

	if(NPC2.m_x < 75)
	{
		i += 2 ;
	}
	else
	{
		i -= rand()%74;
	}

	if(NPC2.m_y < 16)
	{
		j+=3;
	}
	else
	{
		j -= rand()%15;
	}

	if(NPC2.m_width < 5)
	{
		w++;
	}
	else
	{
		w -= rand()%4;
	}

	if(NPC2.m_height < 5)
	{
		h++;
	}
	else
	{
		h -= rand()%4;
	}

}
void Draw()
{	

	for( int i = 0 ; i < Triangles.size() ; ++i )
	{
		Triangles[i].TriangleDraw();
		//Triangles[i].Move();
	}
	for (int i = 0; i < NPC.size() ; ++i )
	{
		NPC[i].Draw();
		NPC[i].Move();
	}
	//Myrect.Draw();
	//NPC2.Move();
	//NPC2.Draw();
	//
}
//마우스 오른쪽 다각형만들어보기