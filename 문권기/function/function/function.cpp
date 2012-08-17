// function.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

int Add(int left,int right)
{
	return left+right;
}
int Minus(int left, int right)
{
	return left-right;
}
int Mul(int left,int right)
{
	return left*right;
}
int Div(int left,int right)
{
	return left/right;
}




int _tmain(int argc, _TCHAR* argv[])
{
	int result1 = Add(10,20);

	//정수 result 10과 20의 합이다.
	printf("result1 = %d\n",result1);

	int result2 = Add(15,12);
	printf("result2 = %d\n",result2);

	int result3 = Minus(30,12);
	printf("result3 = %d\n",result3);

	int result4 = Mul(30,12);
	printf("result4 = %d\n",result4);

	int result5 = Div(30,5);
	printf("result5 = %d\n",result5);
	return 0;
}

