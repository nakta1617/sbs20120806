// Class3.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>
#include "MyRectangle.h"



//void printxy( int x , int y , char ch )
//{
//	COORD pos = {x,y};
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("%c" , ch);
//}

int _tmain(int argc, _TCHAR* argv[])
{
	//화면바깥부터 안쪽가지 골뱅이처럼 빙글빙글
	//돌아서 들어온다
	// 1. 네모칸은 주기적으로 조금씩
	//    화면에 그림을 그린다
	// 2. 가로로는 동그라미, 세로로는
	//    X를 그린다
	// 3. 계속해서 네모칸을 그린다.
	MyRectangle rectangle1;
	rectangle1.m_x = 10;
	rectangle1.m_y = 10;
	rectangle1.m_width = 3;
	rectangle1.m_height = 3;

	MyRectangle rectangle2;
	rectangle2.m_x = 15;
	rectangle2.m_y = 5;
	rectangle2.m_width = 5;
	rectangle2.m_height = 4;

	while (true)
	{
		rectangle1.Draw();
		//rectangle2.Draw();
	}

	
	







	////화면바깥을 뱅글뱅글
	//int c = 0;
	//while(true)
	//{
	//	for( int x = 0 ; x < 50 ; x++ )
	//	{
	//		if( x < 25 )
	//		{
	//			printxy( x+1 , 0 , 'O'+c );
	//		}
	//		else 
	//		{
	//			printxy( 26 , x-25 , 'X'+c);
	//		}
	//		Sleep(30);
	//	}
	//	for( int x = 50 ; x > 0 ; x = x - 1 )
	//	{
	//		if( x > 25 )
	//		{
	//			printxy( x - 25 , 24, 'O'+c);

	//		}
	//		else
	//		{
	//			printxy( 0 , x-1 , 'X'+c);
	//		}
	//		Sleep(30);

	//	}
	//	c++;
	//	
	//}
	//printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	

//화면바깥부터 안쪽까지 골뱅이처럼 빙글빙글

	MyRectangle rectangle1;
	MyRectangle rectangle2;

	rectangle1.m_x = 0;
	rectangle1.m_y = 0;
	rectangle1.m_width = 10;
	rectangle1.m_height = 10;

	rectangle1.m_x = 15;
	rectangle1.m_y = 5;
	rectangle1.m_width = 5;
	rectangle1.m_height = 4;


	while(true)
	{
		rectangle1.Draw();
	}
//돌아서 들어온다


	return 0;
}//반복문 사용하여 애니메이션 만들어보기

