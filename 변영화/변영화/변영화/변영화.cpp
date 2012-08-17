// 변영화.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Human.h"
int _tmain(int argc, _TCHAR* argv[])
{
	Human kimjunsung;
	kimjunsung.age = 10;
	kimjunsung.height = 190;
	kimjunsung.weight = 30;
	kimjunsung.name = "김준성";

	Human ohjaemin;
	ohjaemin.age = 20;
	ohjaemin.height = 140;
	ohjaemin.weight = 200;
	ohjaemin.name = "오재민";

	Human heojaehyun;
	heojaehyun.age = 15;
	heojaehyun.height = 15;
	heojaehyun.weight = 15;
	heojaehyun.name = "허재현";

	Human ohchangkeun;
	ohchangkeun.age = 1;
	ohchangkeun.height = 1;
	ohchangkeun.weight = 1;
	ohchangkeun.name = "오창근";
	
	kimjunsung.Eat();
	ohchangkeun.Eat();
	heojaehyun.Eat();
	ohchangkeun.Eat();

	kimjunsung.Run();
	ohchangkeun.Think();
	heojaehyun.Walk();
	ohchangkeun.Eat();
	/*
	while(true)
	{
		ohchangkeun.Eat();
	}
	

	for(int i = 0; i < 10; i=i+1)     - 0 ~ 9 까지 출력하는 소스
	{
		printf("%d\n", i);
	}

	for(int i = 10; i <= 20; i=i+1)   - 10 ~ 20 까지 출력하는 소스
	{
		printf("%d\n", i);
	}
	

	for( int i = 100; i < 111; i=i+1)  - 100 ~ 110 까지 출력하는 소스
	{
		printf("%d\n", i);
	}

	for( int i = 100; i >= 0; i = i - 1 )  - 100 ~ 0 까지 출력하는 소스
	{
		printf("%d\n", i);
	}
	

	for(int i = 2; i <= 12; i = i + 2)  - 2 ~ 12 중 짝수만 출력 하는 소스
	{
		printf("%d\n", i);
	}
	
	for(int i = 2; i <= 64; i = i * 2)   - 2 ~ 64 중 2배씩 증가하는 수만 출력하는 소스
	{
		printf("%d\n", i);
	}
	

	int sum = 0;
	for(int i = 1; i <= 10; i = i + 1)  - 1 ~ 10 까지 더하는 소스
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
	
	int sum = 0;
	for( int i = 1; i <= 10; i = i + 2)    1 ~ 10 사이의 수 중에서 홀수만 더하는 소스
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
	*/


	return 0;
}

