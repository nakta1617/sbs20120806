// 20120816 ������.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
// �Է°��� 0 ~ 10 �̸� ����
// 11 ~ 20 �̸� û�ҳ�, 21 ~ 30 �̸� ������, 30 ~ 40 �̸� �߳�, ~100 �̸� ���
// �� ���, �� ���� ������ ������
// EX) C���� �����ϵ� ����, �Լ��� ���� ���� ���� ����. ���� § �ڿ� ������ �ϵ��� �Ѵ�

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
		printf("����\n");
		return;
	}
	if(age <= 20)
	{
		printf("û�ҳ�\n");
		return;
	}
	if(age <= 30)
	{
		printf("������\n");
		return;
	}
	if(age <= 40)
	{
		printf("�߳�\n");
		return;
	}
	printf("���\n");
}
int _tmain(int argc, _TCHAR* argv[])
{
	int input = 0;
	scanf("%d", &input);
	printf("%d\n", input);
	PrintPerAge(input);
	return 0;
}

