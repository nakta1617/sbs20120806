// ������.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

void PrintPerAge(int age)
{
	if (age <= 10)
	{
		printf("����\n");
		return;
	}

	if (age <= 20)
	{
		printf("û�ҳ�\n");
		return;
	}

	if (age <= 30)
	{
		printf("������\n");
		return;
	}

	if (age <= 40)
	{
		printf("�߳�\n");
		return;
	}

	printf("���\n");
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
		// a�� 0�϶��� ���� �ض�
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
	// ���� x�� 10�̸� ...�� �ض�
	if (x == 10)
	{

	}

	// ���� x�� 10�̰� y�� 5��
	// ...�� �ض�
	if (10 == x)
	{
		if (y == 5)
		{

		}
	}

	if (10 == x && 5 == y)
	{

	}

	// x�� 10�̰ų� y�� 5�϶�
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

	printf("�Է°�:%d\n", input);

	// �Է°��� 0~10�̸� ����
	// 11~20 : û�ҳ�
	// 21~30 : ������
	// 30~40 : �߳�
	// ~ 100 : ���
	PrintPerAge(input);
	

	// ~, &, |
	int itoday = 2;
	if (0 == itoday)
	{
		printf("������\n");
	}

	enum Weekday { Mon, Tue, Wed, };

	Weekday today = Mon;
	if (Tue == today)
	{
		printf("������\n");
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

