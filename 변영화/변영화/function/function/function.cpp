// function.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

	printf("��� : %d\n", result);
	printf("��� : %d\n", result1);
	printf("��� : %d\n", result2);
	printf("��� : %d\n", result3);

	return 0;
}

