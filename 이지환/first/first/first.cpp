// first.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Human.h"

int _tmain(int argc, _TCHAR* argv[])
{
	/*
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
	heojaehyun.Walk();	// 허재현이 걷는다
	ohchangkeun.Walk();	/* 오창근이 걷는다 */
	
	/*
	while (true)
	{
		kimjunsung.Walk();
		ohjaemin.Walk();
		heojaehyun.Walk();
		ohchangkeun.Walk();
	}
	*/
	/*
	for (int i = 0; i < 10; i = i + 1)
	{
		printf("%d\n", i);
	}
	*/
	// 10 ~ 20까지 찍어보자
	/*
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
	*/
	// 10 ~ 20까지 찍어보자
	//for (int i = 0; i < 10; i = i + 1)	// 0~9까지 찍는다
	/*
	for (int i = 10; i < 21; i = i + 1)
	{
		printf("%d\n", i);
	}
	*/
	// 1. int i = 10;			- i는 10
	// 2. i < 21;				- i가 21보다 작다
	// 3. printf("%d\n", i);	- 실행(10을찍는다)
	// 4. i = i + 1;			- i에 10+1을 넣는다
	// 2. i < 21;				- i가 21보다 작다
	// 3. printf("%d\n", i);	- 실행(11을찍는다)
	// 4. i = i + 1				- i에 11+1을 넣는다
	// 2. i < 21;				- i가 21보다 작다
	// 3. printf("%d\n", i);
	// 4. i = i + 1
	// 2. i < 21;
	// 3. printf("%d\n", i);
	// 4. i = i + 1
	// 2. i < 21;
	// 3. printf("%d\n", i);
	// 4. i = i + 1
	// 2. i < 21;
	// 3. printf("%d\n", i);
	// 4. i = i + 1
	/*
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
/*
	for (int i =0; i< 10; i = i + 1)
	{
		printf("%d\n", i);
	}
	

<<<<<<< .mine
	for (int i = 10; i<=20; i = i+1)
	{
		printf("%d\n", i);
	}
	

	for (int i = 100; i <= 110; i= i+1)
	{
		printf("%d\n", i);
	}
	*/
	for (int i = 100; i>=0; i= i-1)
	{
		printf("%d\n", i);
	}


	for (int i = 2; i<=12; i=i+2)
	{
			printf("%d\n", i);
	}

	for (int i = 2; i<=64; i=i*2)
	{
			printf("%d\n", i);
	}

	int sum =0;
	for (int i =1; i<=10; i =i+1)
	{
		sum = sum + i;
}
printf("%d\n", i);
=======
	int year = 2012;
	year = 2012;

	// 100부터 110까지 찍어보세요
	for (int i = 100; i < 111; i = i + 1)
	{
		printf("%d\n", i);
	}
	*/
	// 100부터 0까지 찍어보세요(for 이용)
	/*
	for (int i = 100; i > -1; i = i - 1)
	{
		printf("%d\n", i);
	}
	*/
	/*
	// 2, 4, 6, 8, 10, 12를 찍어보세요(for 이용)
	for (int i = 2; i <= 12; i = i + 2)
	{
		printf("%d\n", i);
	}

	// 2, 4, 8, 16, 32, 64를 찍어보세요(for이용)
	for (int i = 2; i <= 64; i = i * 2)
	{
		printf("%d\n", i);
	}
	*/

	// 1부터 10까지 합을 구해라
/*
	int sum = 0;
	for (int i = 1; i <= 10; i = i + 1)
	{
		// 1~10까지 변하는 i를 쓸 수 있게 됩니다.
		sum = sum + i;
	}
	printf("%d\n", sum);
	*/
	// 0 + 1 = 1
	// 1 + 2 = 3
	// 3 + 3 = 6
	// 6 + 4 = 10
	// ....

	// 1부터 10까지의 홀수의 합을 구하세요
	// 1, 3, 5, 7, 9
	int sum = 0;
	for (int i = 1; i <= 10; i = i + 2)
	{
		// 1~10까지 변하는 i를 쓸 수 있게 됩니다.
		sum = sum + i;
	}
	printf("%d\n", sum);

	
>>>>>>> .r131
	return 0;
}












/*


#include < windows.h >     // windows.h를 인클루드 시킵니다.
#include <iostream>

using namespace std;

void gotoxy(int x,int y)
{	
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); 
}

void setcolor(int color, int bgcolor) 
{
	color &= 0xf;
	bgcolor &= 0xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

int main()
{
	setcolor(10,0);                //10 :초록
	gotoxy(12,13);
	cout<<"Hello, world!"<<endl<<endl;
	return 0;
}
*/