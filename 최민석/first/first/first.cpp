// first.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
	kimjunsung.name = "���ؼ�";

	Human ohjaemin;
	ohjaemin.age = 20;
	ohjaemin.height = 140;
	ohjaemin.weight = 200;
	ohjaemin.name = "�����";

	Human heojaehyun;
	heojaehyun.age = 15;
	heojaehyun.height = 15;
	heojaehyun.weight = 15;
	heojaehyun.name = "������";

	Human ohchangkeun;
	ohchangkeun.age = 22;
	ohchangkeun.height = 183;
	ohchangkeun.weight = 72;
	ohchangkeun.name = "��â��";
	
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
	heojaehyun.Walk();	// �������� �ȴ´�
	ohchangkeun.Walk();	/* ��â���� �ȴ´� */
	
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
	// 10 ~ 20���� ����
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
	// 10 ~ 20���� ����
	//for (int i = 0; i < 10; i = i + 1)	// 0~9���� ��´�
	/*
	for (int i = 10; i < 21; i = i + 1)
	{
		printf("%d\n", i);
	}
	*/
	// 1. int i = 10;			- i�� 10
	// 2. i < 21;				- i�� 21���� �۴�
	// 3. printf("%d\n", i);	- ����(10����´�)
	// 4. i = i + 1;			- i�� 10+1�� �ִ´�
	// 2. i < 21;				- i�� 21���� �۴�
	// 3. printf("%d\n", i);	- ����(11����´�)
	// 4. i = i + 1				- i�� 11+1�� �ִ´�
	// 2. i < 21;				- i�� 21���� �۴�
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

	int year = 2012;
	year = 2012;

	// 100���� 110���� ������
	for (int i = 100; i < 111; i = i + 1)
	{
		printf("%d\n", i);
	}
	*/
	// 100���� 0���� ������(for �̿�)
	/*
	for (int i = 100; i > -1; i = i - 1)
	{
		printf("%d\n", i);
	}
	*/
	/*
	// 2, 4, 6, 8, 10, 12�� ������(for �̿�)
	for (int i = 2; i <= 12; i = i + 2)
	{
		printf("%d\n", i);
	}

	// 2, 4, 8, 16, 32, 64�� ������(for�̿�)
	for (int i = 2; i <= 64; i = i * 2)
	{
		printf("%d\n", i);
	}
	*/

	// 1���� 10���� ���� ���ض�
/*
	int sum = 0;
	for (int i = 1; i <= 10; i = i + 1)
	{
		// 1~10���� ���ϴ� i�� �� �� �ְ� �˴ϴ�.
		sum = sum + i;
	}
	printf("%d\n", sum);
	*/
	// 0 + 1 = 1
	// 1 + 2 = 3
	// 3 + 3 = 6
	// 6 + 4 = 10
	// ....

	// 1���� 10������ Ȧ���� ���� ���ϼ���
	// 1, 3, 5, 7, 9
	int sum = 0;
	for (int i = 1; i <= 10; i = i + 2)
	{
		// 1~10���� ���ϴ� i�� �� �� �ְ� �˴ϴ�.
		sum = sum + i;
	}
	printf("%d\n", sum);

	
	return 0;
}












/*


#include < windows.h >     // windows.h�� ��Ŭ��� ��ŵ�ϴ�.
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
	setcolor(10,0);                //10 :�ʷ�
	gotoxy(12,13);
	cout<<"Hello, world!"<<endl<<endl;
	return 0;
}
*/