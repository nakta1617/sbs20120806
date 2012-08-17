// 연산자.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

void PrintPerAge(int age)
{
	
	if(age <=10)
	{
		printf("%d살이므로 꼬마입니다.\n",age);
		return;
	}
		if(age <=20)
	{
		printf("%d살이므로 청소년입니다.\n",age);
		return;
	}
		if(age <=30)
	{
		printf("%d살이므로 아저씨입니다.\n",age);
		return;
	}
	if(age <=40)
	{
		printf("%d살이므로 중년입니다 .\n",age);
		return;
	}	
	printf("%d살이므로 노년입니다.\n",age);
}


int _tmain(int argc, _TCHAR* argv[])
{

	int input = 0;
	printf("나이를 입력하세요 ->");
	scanf("%d",&input);

	//!

	//++

	//&&,||

	//~, &, |

	


	PrintPerAge(input);




	return 0;
}

