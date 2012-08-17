// function.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

int result(int a, int b)
{
	return a + b ;
}

int _tmain(int argc, _TCHAR* argv[])
{

	int add = result(20,30);

	printf("%d", add);




	return 0;
}

