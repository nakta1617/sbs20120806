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
	printxy(1, 1, '*');
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
	

	for (int x = 0; x < 80; x = x + 1)
	{
		printxy(x - 1, 5, ' ');
		printxy(x, 5, '*');
		Sleep(500);
	}

	// 오른쪽 끝에서 왼쪽으로 이동해본다
	// 위에서 아래로 이동해본다
	// 아래에서 위로 이동해본다
	// 대각선 이동
	// 화면을 좌우로 왔다갔다
	// 화면을 위아래로 왔다갔다
	// 화면 바깥을 뱅글뱅글 계속 돈다
	// 화면 바깥부터 안쪽가지 골뱅이처럼 뱅글뱅글
	// 돌아서 들어온다
	// 계속해서 네모칸 만들기
	
	rectangle;
	while (true) 
	{
		rectangle.Draw();
		*/

		return 0;
		}