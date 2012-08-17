// function.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

int Add(int left, int right)
{
	return left + right;
}

int Minus(int left, int right)
{
	return left - right;
}

int Mul(int left, int right)
{
	return left * right;
}

int Div(int left, int right)
{
	return left / right;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int result = Add(10, 20);
	int result1 = Minus(10, 2);
	int result2 = Mul(10, 2);
	int result3 = Div(10, 2);

	printf("결과 : %d\n", result);
	printf("결과 : %d\n", result1);
	printf("결과 : %d\n", result2);
	printf("결과 : %d\n", result3);

	return 0;
}

