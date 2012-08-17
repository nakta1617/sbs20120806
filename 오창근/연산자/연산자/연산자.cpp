// 연산자.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

void PrintPerAge(int age)
{
	if (age <= 10)
	{
		printf("꼬마\n");
		return;
	}

	if (age <= 20)
	{
		printf("청소년\n");
		return;
	}

	if (age <= 30)
	{
		printf("아저씨\n");
		return;
	}

	if (age <= 40)
	{
		printf("중년\n");
		return;
	}

	printf("노년\n");
}

int _tmain(int argc, _TCHAR* argv[])
{
	// +, -, *, /
	// =
	// ==, !=, <, >, <=, >=

	// !
	int a = 0;
	if (!a)
	{
		// a가 0일때만 실행 해라
	}

	// ++
	int b = 0;
	b = b + 1;	// 1
	b++;		// 2
	++b;		// 3

	int c = b++;	// b=4, c=3
	int d = ++b;	// b=5, d=5

	// &&, ||
	int x = 0;
	int y = 0;
	// 만약 x가 10이면 ...를 해라
	if (x == 10)
	{

	}

	// 만약 x가 10이고 y가 5면
	// ...를 해라
	if (10 == x)
	{
		if (y == 5)
		{

		}
	}

	if (10 == x && 5 == y)
	{

	}

	// x가 10이거나 y가 5일때
	int processed = 0;
	if (10 == x)
	{
		processed = 1;
		//...
	}
	if (5 == y)
	{
		if (1 != processed)
		{
			//...
		}
	}

	if (10 == x || 5 == y)
	{
		//....
	}

	int input = 0;
	scanf("%d", &input);

	printf("입력값:%d\n", input);

	// 입력값이 0~10이면 꼬마
	// 11~20 : 청소년
	// 21~30 : 아저씨
	// 30~40 : 중년
	// ~ 100 : 노년
	PrintPerAge(input);
	

	// ~, &, |
	int itoday = 2;
	if (0 == itoday)
	{
		printf("수요일\n");
	}

	enum Weekday { Mon, Tue, Wed, };

	Weekday today = Mon;
	if (Tue == today)
	{
		printf("수요일\n");
	}

	today = Wed;

	Weekday someday = Wed;

	if (today == someday)
	{
		
	}

	Weekday dday = Mon;


	if (dday == today)
	{

	}


	class Human
	{

	};

	Human h1;

	return 0;
}

