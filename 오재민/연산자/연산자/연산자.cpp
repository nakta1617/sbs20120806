// 연산자.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

void PrintPeri( int Age );

int _tmain(int argc, _TCHAR* argv[])
{
	int input = 0;
	
	printf("나이가? : ");
	scanf("%d",&input);

	PrintPeri( input );

	return 0;
}
void PrintPeri( int Age )
{
	if( 1 < Age && 11 > Age)
	{
		printf("꼬마\n");
	}
	else if( 11 < Age &&  21 > Age)
	{
		printf("청소년\n");
	}
	else if( 21 < Age &&  31 > Age)
	{
		printf("아저씨\n");
	}
	else if( 31 < Age &&  41 > Age)
	{
		printf("중년\n");
	}
	else if( 41 < Age &&  100 > Age)
	{
		printf("노년\n");
	}

}

