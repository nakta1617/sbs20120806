// Function.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

int Add( int x ,int y );
int Minus( int x ,int y );
int Mul( int x ,int y );
int Div( int x ,int y );

int _tmain(int argc, _TCHAR* argv[])
{
	int result1 = Add( 10 , 20 );
	printf("%d \n",result1);
	int result2 = Minus( 10 , 20 );
	printf("%d \n",result2);
	int result3 = Mul( 10 , 20 );
	printf("%d \n",result3);
	int result4 = Div( 10 , 20 );
	printf("%d \n",result4);
	return 0;
}
int Add( int x ,int y )
{
	return x + y ;
}
int Minus( int x ,int y )
{
	return x - y ;
}
int Mul( int x ,int y )
{
	return x * y ;
}
int Div( int x ,int y )
{
	return x / y ;
}

