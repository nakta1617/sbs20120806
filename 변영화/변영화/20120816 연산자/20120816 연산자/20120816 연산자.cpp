// 20120816 연산자.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
// 입력값이 0 ~ 10 이면 꼬마
// 11 ~ 20 이면 청소년, 21 ~ 30 이면 아저씨, 30 ~ 40 이면 중년, ~100 이면 노년
// 선 사용, 후 구현 습관을 들이자
// EX) C에서 구현하듯 변수, 함수를 먼저 선언 하지 말자. 먼저 짠 뒤에 구현을 하도록 한다

// +, -, *, /
// =
// ==, !=, <, >, <=, >=

// ++
// !

// &&, ||

// ~, &, |

#include "stdafx.h"

void PrintPerAge(int age)
{
	if( age >= 0 && age <= 10)
	{
		printf("꼬마\n");
		return;
	}
	if(age <= 20)
	{
		printf("청소년\n");
		return;
	}
	if(age <= 30)
	{
		printf("아저씨\n");
		return;
	}
	if(age <= 40)
	{
		printf("중년\n");
		return;
	}
	printf("노년\n");
}
int _tmain(int argc, _TCHAR* argv[])
{
	int input = 0;
	scanf("%d", &input);
	printf("%d\n", input);
	PrintPerAge(input);
	return 0;
}

