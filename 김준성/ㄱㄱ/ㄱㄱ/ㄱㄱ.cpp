// ����.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])


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

	// 10 ~ 20���� ����

	for (int i = 10; i < 21; i = i + 1)
	{
		printf("%d\n", i);
	}

	// 1. int i = 10;           - i�� 10
	// 2. i < 21;               - i�� 21���� �۴� 
	// 3. printf("%d\n");       - ����
	// 4. i = i + 1;            - i�� 10+1�� �ִ´�.
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

	//100���� 110���� ����.

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

