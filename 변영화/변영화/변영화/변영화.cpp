// ����ȭ.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Human.h"
int _tmain(int argc, _TCHAR* argv[])
{
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
	ohchangkeun.age = 1;
	ohchangkeun.height = 1;
	ohchangkeun.weight = 1;
	ohchangkeun.name = "��â��";
	
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
	

	for(int i = 0; i < 10; i=i+1)     - 0 ~ 9 ���� ����ϴ� �ҽ�
	{
		printf("%d\n", i);
	}

	for(int i = 10; i <= 20; i=i+1)   - 10 ~ 20 ���� ����ϴ� �ҽ�
	{
		printf("%d\n", i);
	}
	

	for( int i = 100; i < 111; i=i+1)  - 100 ~ 110 ���� ����ϴ� �ҽ�
	{
		printf("%d\n", i);
	}

	for( int i = 100; i >= 0; i = i - 1 )  - 100 ~ 0 ���� ����ϴ� �ҽ�
	{
		printf("%d\n", i);
	}
	

	for(int i = 2; i <= 12; i = i + 2)  - 2 ~ 12 �� ¦���� ��� �ϴ� �ҽ�
	{
		printf("%d\n", i);
	}
	
	for(int i = 2; i <= 64; i = i * 2)   - 2 ~ 64 �� 2�辿 �����ϴ� ���� ����ϴ� �ҽ�
	{
		printf("%d\n", i);
	}
	

	int sum = 0;
	for(int i = 1; i <= 10; i = i + 1)  - 1 ~ 10 ���� ���ϴ� �ҽ�
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
	
	int sum = 0;
	for( int i = 1; i <= 10; i = i + 2)    1 ~ 10 ������ �� �߿��� Ȧ���� ���ϴ� �ҽ�
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
	*/


	return 0;
}

