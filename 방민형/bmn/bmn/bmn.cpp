// bmn.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "human.h"

int _tmain(int argc, _TCHAR* argv[])
{
	human Kimjunsung;
	Kimjunsung.age = 10;
	Kimjunsung.height = 190;
	Kimjunsung.weight = 30;
	Kimjunsung.name = "���ؼ�";

	human ohjaemin;
	ohjaemin.age = 15;
	ohjaemin.height = 15;
	ohjaemin.weight = 15;
	ohjaemin.name = "�����";

	human heojaehyun;
	heojaehyun.age = 815;
	heojaehyun.height = 155;
	heojaehyun.weight = 185;
	heojaehyun.name = "������";

	human ohchangkeun;
	ohchangkeun.age = 615;
	ohchangkeun.height = 165;
	ohchangkeun.weight = 165;
	ohchangkeun.name = "��â��";

	
	Kimjunsung.Run();
	ohjaemin.Run();
	heojaehyun.Run();
	ohchangkeun.Run();

	Kimjunsung.Eat();
	ohjaemin.Eat();
	heojaehyun.Eat();
	ohchangkeun.Eat();

	Kimjunsung.Think();
	ohjaemin.Think();
	heojaehyun.Think();
	ohchangkeun.Think();

	Kimjunsung.Walk();
	ohjaemin.Walk();
	heojaehyun.Walk();
	ohchangkeun.Walk();
	/*
	while (true)
	{
	Kimjunsung.Walk();
	ohjaemin.Walk();
	heojaehyun.Walk();
	ohchangkeun.Walk();
	}
	*//*
	for (int i= 2; i<65 ; i=i*2)//2,4,8,16,32,64
	{
		printf("%d\n",i);
	}
	for (int i= 2; i<13 ; i=i+2)//2,4,6,8,10,12
	{
		printf("%d\n",i);
	}
	for (int i= 100; i>-1 ; i=i-1)//100���� 0����
	{
		printf("%d\n",i);
	}*/
    int sum=0;
	for (int i= 1 ; i<10 ; i=i+2)
	{
		sum=sum+i;
	}
	printf("%d\n",sum);

	return 0;
}

