// first.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
// F9�� �극��ũ����Ʈ�� ��´�.
// F5�� ����� ��� ������ �Ѵ�.
// F10���� ���� ������ �� �� �ִ�.
// F11�� 

#include "stdafx.h"
#include "Human.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Human kimjunsung;
	kimjunsung.age = 10;
	kimjunsung.height = 180;
	kimjunsung.weight = 70;
	kimjunsung.name = "���ؼ�";

	Human ohjaemin;
	ohjaemin.age = 11;
	ohjaemin.height = 150;
	ohjaemin.weight = 50;
	ohjaemin.name = "�����";

	Human heojaehyun;
	heojaehyun.age = 20;
	heojaehyun.height = 170;
	heojaehyun.weight = 60;
	heojaehyun.name = "������";

	Human ochangkeun;
	ochangkeun.age = 15;
	ochangkeun.height = 165;
	ochangkeun.weight = 65;
	ochangkeun.name = "��â��";

	kimjunsung.Eat();
	ohjaemin.Eat();
	heojaehyun.Eat();
	ochangkeun.Eat();

	kimjunsung.Run();
	ohjaemin.Run();
	heojaehyun.Run();
	ochangkeun.Run();

	kimjunsung.Think();
	ohjaemin.Think();
	heojaehyun.Think();
	ochangkeun.Think();

	/*
	while (true)
	{
		kimjunsung.Walk();
		ohjaemin.Walk();
		heojaehyun.Walk();
		ochangkeun.Walk();
	}

	for (int i = 0; i < 10; i = i + 1)
	{
		printf("%d\n", i);
	}

	for (int i = 10; i <= 20; i = i + 1)
	{
		printf("%d\n", i);
	}

	for (int i = 100; i <= 110; i = i + 1)
	{
		printf("%d\n", i);
	}

	for (int i = 100; i >= 0; i = i - 1)
	{
		printf("%d\n", i);
	}

	for (int i = 2; i <= 12; i = i + 2)
	{
		printf("%d\n", i);
	}

	for (int i = 2; i <= 64; i = i * 2)
	{
		printf("%d\n",i);
	}


	int sum = 0;
	for (int i = 1; i <= 10; i = i + 1)
	{
		sum = sum + i;
	}

	printf("%d\n", sum);

	int sum = 0;
	for (int i = 1; i <= 10; i = i + 2)
	{
		sum = sum + i;
	}
	printf("%d\n", sum); */



	return 0;
}

