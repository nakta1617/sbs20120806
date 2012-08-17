// Class4.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>


void printxy( int x , int y , char ch )
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c" , ch);
}

int _tmain(int argc, _TCHAR* argv[])
{
	//(10.10)에서 (10.15)까지 *로 선긋기
	//for( int x = 10 ; x < 16 ; x++ )
	//{
	//	printxy( 10 , x , '*');
	//	Sleep(30);
	//}


	//(15.10)에서 (15.0) 까지 *로 선긋기
	//for( int y = 10 ; y >= 0 ; y-- )
	//{
	//	printxy( 15 , y , '*');
	//	Sleep(30);
	//}


	//(0.15)에서 (0.0)까지 *로 선긋기
	//for( int y = 15 ; y >= 0 ; y-- )
	//{
	//	printxy( 0 , y , '*');
	//	Sleep(30);
	//}

	//아래에서 x를 바꿀때마다 
	//실제화면의 *의 x위치가 변하도록 코드수정
	//int x = 10;
	//for( int y = 15 ; y >= 0 ; y-- )
	//{
	//	printxy( x , y , '*');
	//	Sleep(30);
	//	
	//}x++;

	//m_y를 수정함으로서
	//선의 세로 시작점이 바뀌도록 수정
	//int m_y = 3;
	//for( int y = m_y ; y >= 0 ; y-- )
	//{
	//	printxy( 10 , y , '*');
	//	Sleep(30);
	//	
	//}

	//m_height를 고쳐서
	//높이를 조정할 수 있게 수정 height 개수만큼만 출력
	//int m_y = 15;
	//int m_height = 3;
	//for( int y = m_y ; y > m_y - m_height  ; y = y - 1 )
	//{
	//	printxy( 10 , y , '*');
	//	Sleep(100);
	//}

	// (10, 15)에서 m_width만큼 선을 그리세요
	//int m_x = 5;
	//int m_width = 3;
	//int m_y = 15;
	//int m_height = 3;
	//for( int x = 0 ; x <  m_width  ; x++ )
	//{
	//	printxy( 10 - x , 15 , '*');
	//	Sleep(100);
	//	printf("\n");
	//}


	//숙제~~~~~~
	//문제1.네모칸을 가로로 만들어지게 칸사이즈 5*6
	//for( int y = 0 ; y < 6 ; y++ )
	//{
	//	for( int x = 0 ; x < 5 ; x++ )
	//	{
	//		printxy(x , y , '*');
	//		Sleep(100);
	//	}
	//}
	//문제2. 반쪽 삼각형만들기
	//*
	//**
	//***
	//****
	//*****
	//for(int x = 0 ; x < 5 ; x++ )
	//{
	//	for( int y = 0 ; y < x+1 ; y++ )
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//for(int x = 0 ; x < 6 ; x++ )
	//{
	//	for( int y = 6 ; y > x ; y-- )
	//	{
	//		printxy( x , y , '*');
	//		Sleep(200);
	//	}
	//}
	//문제3. 반쪽 삼각형 거꾸로찍기
	//for(int x = 0 ; x < 6 ; x++ )
	//{
	//	for( int y = 0 ; y < 6 - x ; y++ )
	//	{
	//		printxy( x , y , '*');
	//		Sleep(200);
	//	}
	//}
	//문제4. 피라미드

	//for(int y = 1 ; y <= 4 ; y++ )
	//{
	//	for( int x = 4 ; x > 4 - y ; x-- )
	//	{
	//		printxy( x, y , 'A');
	//		Sleep(200);
	//	}

	//}



////////	//for(int y = 0 ; y < 4 ; y++ )
	//{
	//	for(static int z = 0 ; z < 3 ; z++ )
	//	{
	//		printf("A");
	//	}
	//	for( int x = 0 ; x < y + (y+1)  ; x++)
	//	{
	//		printxy( x, y , 'C');
	//		Sleep(200);
	//	}

	//}

	//문제5. 피라미드 거꾸로
	//문제6. 
	//*
	//**
	//***
	//****
	//*****
	//****
	//***
	//**
	//*
	//문제7.  문제6. 거꾸로




	return 0;
}

