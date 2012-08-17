// blockbuster.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <windows.h>

void printxy(int x,int y,char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos
	);
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
	printxy(10, 10, '*');
	*/
	/*
	for (int x = 0; x < 80; x = x + 1)
	{
		printxy(x - 1, 5, ' ');
		printxy(x, 5, '*');
		Sleep(500);
	}
	*/
	// 오른쪽 끝에서 왼쪽으로 이동해본다!
	// 위에서 아래로 이동해본다
	// 아래에서 위로 이동해본다
	// 대각선 이동!
	// 화면을 좌우로 왔다갔다
	// 화면을 위아래로 왔다갔다
	// 화면 바깥을 뱅글뱅글 계속 돈다
	// 화면 바깥부터 안쪽가지 골뱅이처럼 뱅글뱅글
	// 돌아서 들어온다
	

	// 화면에 (10, 10) ~ (10, 15)까지 
	// 선을 그려보세요
	// printxy를 이용
	/*
	for (int y = 10; y < 16; y = y + 1)
	{
		printxy(10, y, '*');
	}
	*/

	// (15, 10)에서 (15, 0) 까지
	// *로 선을 그어보세요
	/*
	for (int y = 10; y >= 0; y = y - 1)
	{
		printxy(15, y, '*');
		Sleep(100);
	}
	*/
	// (0, 15)에서 (0, 0)까지
	// *로 선을 그어보세요
	/*
	for (int y = 15; y >= 0; y = y - 1)
	{
		printxy(0, y, '*');
		Sleep(100);
	}
	*/

	// 아래에서, x를 바꿀때마다
	// 실제 화면의 *의 x위치가 변하도록
	// 코드를 수정하세요
	/*
	int x = 0;
	for (int y = 15; y >= 0; y = y - 1)
	{
		printxy(x, y, '*');
		Sleep(100);
	}
	*/


	// m_y를 수정함으로서
	// 선의 세로 시작점이 바뀌도록
	// 수정하세요
	/*
	int m_y = 3;
	for (int y = m_y; y >= 0; y = y - 1)
	{
		printxy(10, y, '*');
		Sleep(100);
	}
	*/

	// m_height를 고쳐서
	// 높이를 조정 할 수 있게 수정
	/*
	int m_y = 15;
	int m_height = 3;	// 3번만 순회
	for (int y = m_y; y > m_y - m_height; y = y - 1)
	{
		printxy(10, y, '*');
		Sleep(1000);
	}
	*/
	/*
	int m_y = 15;
	int m_height = 3;	// 3번만 순회
	for (int y = 0; y < m_height; y = y + 1)
	{
		printxy(10, m_y - y, '*');
		Sleep(1000);
	}
	*/
	// (10, 15)에서
	// m_width만큼 왼쪽으로 선을
	// 그리세요
	/*
	int m_width = 5;
	for (int x = 0; x < m_width; x = x + 1)
	{
		printxy(10 - x, 15, '*');
		Sleep(1000);
	}
	int m_y = 15;
	int m_height = 5;
	for (int y = 0; y < m_height; y = y + 1)
	{
		printxy(10, m_y - y, '*');
		Sleep(1000);
	}
	*/
/*
	for (int x = 0; x < 5; x = x + 1)	
	{
		for (int y = 0; y < 5; y = y + 1)
		{
			printxy(x, y, '*');
			Sleep(1000);
		}
	}
	*/
	// 문제 1.
	// 가로로 네모칸이 만들어지도록.
	// 네모칸 사이즈는 5*6
/*
	for (int y = 0; y < 6; y = y + 1)	
	{
		for (int x = 0; x < 5; x = x + 1)
		{
			printxy(x, y, '*');
			Sleep(10);
		}
	}
	*/

	// 문제2.
	// *
	// * *
	// * * *
	// * * * *
	// * * * * *
	// * * * * * *
/*
	for (int y = 1; y <= 6; y = y + 1)	
	{
		for (int x = 0; x < y ; x = x + 1)
		{
			printxy(x, y, '*');
			Sleep(10);
		}
	}
	*/

	// 문제3.
	// * * * * * *
	// * * * * *
	// * * * *
	// * * *
	// * *
	// * 
/*
	for (int y = 1; y <= 6; y = y + 1)	
	{
		for (int x = 1; x <= 7 - y ; x = x + 1)
		{
			printxy(x, y, '*');
			Sleep(10);
		}
	}
	*/
	// 문제4.
	// *
	// * * *
	// * * * * *
	// * * * * * * *

	//       *	4부터 시작해서 1개
	//     * *	4부터 시작해서 2개
	//   * * *	4부터 시작해서 3개
	// * * * *	4부터 시작해서 4개

	//        
	//         *
	//         * *
	//         * * *

	//       *
	//     * * *
	//   * * * * *
	// * * * * * * *
	for (int y = 1; y <= 4; y = y + 1)	
	{
		for (int x = 4; x > 4 - y; x = x - 1)
		{
			printxy(x, y, '*');
			Sleep(10);
		}
	}

	// 문제5.
	// * * * * * * *
	//   * * * * *
	//     * * *
	//       *

	// 문제6.
	// *
	// * *
	// * * *
	// * * * *
	// * * * * *
	// * * * *
	// * * *
	// * *
	// *

	// 문제7.
	//         *
	//       * *
	//     * * *
	//   * * * *
	// * * * * *
	//   * * * *
	//     * * *
	//       * *
	//         *

	return 0;
}

