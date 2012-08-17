// Class3.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>
#include "MyRectangle.h"

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

	
	






	return 0;
}//반복문 사용하여 애니메이션 만들어보기

