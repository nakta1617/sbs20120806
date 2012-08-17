// blockbuster.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <windows.h>
void printxy(int x,int y,char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", ch);
}

int _tmain(int argc, _TCHAR* argv[])
{


	/*
	
	// 0,10 에서 0,0 으로
	for (int y = 10; y >= 0; y = y - 1)
	{
		printxy(15, y, '*');
		Sleep(100);      // 별이 찍히는 속도!!
	}


	// 0,15 에서 0,0 으로
	for (int y = 15; y >= 0; y = y - 1)
	{
		printxy(0, y, '*');
		Sleep(100);
	}

	




	// 아래에서 x를 바꿀때마다 실제 화면의 *의 x위치가 변하도록 코드수정
	int x = 10;
	for (int y = 15; y >= 0; y = y - 1)
	{
		printxy(x, y, '*');
		Sleep(100);
	}

	



	// m_y를 수정함으로서 선의 세로 시작점이 바뀌도록 수정하라
	int m_y = 50;
	for (int y = m_y; y >= 0; y = y - 1)
	{
		printxy(10, y, '*');
		Sleep(100);
	}




	// m_height를 고쳐서 높이를 조정할 수 있게 수정하라
	int m_height = 3;
	int m_y = 15;
	for (int y = m_y; y > m_y - m_height; y = y - 1)
	{
		printxy(10, y, '*');
		Sleep(100);
	}

	


	// 위의 문제와 같음
	int m_y = 15;
	int m_height = 3;
	for (int y = 0; y < m_height; y = y + 1)
	{
		printxy(10, m_y - y, '*');
		Sleep(100);
	}



	// (10,15)에서 m_width만큼 왼쪽으로 선을 그려라
	int m_width = 3;
	for (int x = 0; x < m_width; x = x + 1)
	{
		printxy(10 - x, 15, '*');
		Sleep(100);
	}

	int m_y = 15;
	int m_height = 3;
	for (int y = 0; y < m_height; y = y + 1)
	{
		printxy(10, m_y - y, '*');
		Sleep(100);
	}


	// 안쪽껄 먼저 하고, 다음에 바깥쪽 for 구문을 실행한다.   (네모칸 생성)
	for(int x = 0; x < 5; x = x + 1)
	{
		for (int y = 0; y < 5; y = y + 1)
		{
			printxy(x, y, '*');
			Sleep(1000);
		}
		printxy(x, 0, '*');
		Sleep(1000);
	}


    //숙제  문제1 가로로 네모칸이 만들어지도록. 네모칸 사이즈는 5*6    ?????
	for(int y = 0; y < 6; y = y + 1)
	{
		for (int x = 0; x < 5; x = x + 1)
		{
			printxy(x, y, '*');
			Sleep(1000);
		}
		printxy(x, y, '*');
		Sleep(1000);
	}

		*/

    //      문제2    ????
            // *
            // **
            // ***
            // ****
            // ***** 찍기
	for (int y = 1; y <= 6; y = y + 1)
	{
		for (int x = 0; x < y ; x = x + 1)
		{
			printxy(x, y, '*');
			Sleep(10);
		}
		







    //      문제3   위에것 위아래 뒤집어서 만들기
    //      문제4 
    //      *
    //     * *
    //    * * *
    //  * * * * *
    //* * * * * * *
    //      문제5 위에것 위아래 뒤집기
    //      문제6
    //*
    //**
    //***
    //****
    //*****
    //****
    //***
    //**
    //*
    //      문제7 위문제 오른쪽으로 대칭시키기


















	return 0;
}