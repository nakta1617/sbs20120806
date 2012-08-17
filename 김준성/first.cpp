// first.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	ohchangkeun.age = 22;
	ohchangkeun.height = 183;
	ohchangkeun.weight = 72;
	ohchangkeun.name = "오창근";
	
	kimjunsung.Eat();
	ohjaemin.Eat();
	heojaehyun.Eat();
	ohchangkeun.Eat();

	kimjunsung.Run();
	ohjaemin.Run();
	heojaehyun.Run();
	ohchangkeun.Run();

	kimjunsung.Think();
	ohjaemin.Think();
	heojaehyun.Think();
	ohchangkeun.Think();

	kimjunsung.Walk();
	ohjaemin.Walk();
	heojaehyun.Walk();
	ohchangkeun.Walk(); /* 오창근씨 */

	/*
	while (true)
	{
		kimjunsung.Walk();
		ohjaemin.Walk();
		heojaehyun.Walk();
		ohchangkeun.Walk();
	}
	*/

	for (int i = 0; i < 10; i = i + 1)
	{
		printf("%d\n", i);
	}

	// 10 ~ 20까지 찍어보자

	for (int i = 10; i < 21; i = i + 1)
	{
		printf("%d\n", i);
	}

	// 1. int i = 10;           - i는 10
	// 2. i < 21;               - i는 21보다 작다 
	// 3. printf("%d\n");       - 실행
	// 4. i = i + 1;            - i에 10+1에 넣는다.
	// 2. i < 21;
	// 3. printf("%d\n");
	// 4. i = i + 1// 2. i < 21;
	// 2. i < 21;
	// 3. printf("%d\n");
	// 4. i = i + 1// 2. i < 21;
	// 2. i < 21;
	// 3. printf("%d\n");
	// 4. i = i + 1;

	printf("10\n");
	printf("11\n");
	printf("12\n");
	printf("13\n");
	printf("14\n");
	printf("15\n");
	printf("16\n");
	printf("17\n");
	printf("18\n");
	printf("19\n");
	printf("20\n");

	int year = 2012;
	year = 2012;

	//100부터 110까지 찍어보자.

	for (int i = 100; i < 111; i = i + 1)
	{
           printf("%d\n", i);
	}
	
	for (int i = 100; i > -1; i = i - 1)
	{
		printf("%d\n", i);
	}

	for (int i = 0; i < 13; i = i + 2)
	{
		printf("%d\n", i);
	}

	for (int i = 1; i < 100; i = i * 2)
	{
		printf("%d\n", i);
	}
	return 0;
}

