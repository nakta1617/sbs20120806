// 1.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Human.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Human kimjunsung;
	kimjunsung.age = 10;
	kimjunsung.height = 190;
	kimjunsung.weight = 30;
	kimjunsung.name ="���ؼ�";
	Human ohjaemin;
	ohjaemin.age = 15;
	ohjaemin.height = 120;
	ohjaemin.weight = 40;
	ohjaemin.name ="�����";
	Human heojaehyun;
	heojaehyun.age = 25;
	heojaehyun.height = 180;
	heojaehyun.weight = 60;
	heojaehyun.name ="������";
	Human ohchangkeun;
	ohchangkeun.age = 22;
	ohchangkeun.height = 180;
	ohchangkeun.weight = 50;
	ohchangkeun.name ="��â��";

	kimjunsung.Eat();
	ohjaemin.Eat();
	heojaehyun.Eat();
	ohchangkeun.Eat();

	kimjunsung.Run();
	ohjaemin.Run();
	heojaehyun.Run();
	ohchangkeun.Run();

	kimjunsung.Walk();
	ohjaemin.Walk();
	heojaehyun.Walk();
	ohchangkeun.Walk();

	kimjunsung.Think();
	ohjaemin.Think();
	heojaehyun.Think();
	ohchangkeun.Think();

	/*
	while(true)
	{
		kimjunsung.Think();
		ohjaemin.Think();
		heojaehyun.Think();
		ohchangkeun.Think();
	}
	*/
	
	for(int i = 10; i<21;i=i+1)
	{
		printf("%d\n",i);
	}

	int year = 2012;
	// == int year = 2012;

	/*
	1. int i =10;			-i�� 10
	2. i<21;				-i�� 21�����۴�
	3. printf("%d\n",i);	-����
	4. i= i+1;				-i�� 10+1�� �ִ´�
	2. i<21;				-i�� 21�����۴�
	3. printf("%d\n",i);	-����
	4. i= i+1;				
	2. i<21;				-i�� 21�����۴�
	3. printf("%d\n",i);	-����
	4. i= i+1;				
	2. i<21;				-i�� 21�����۴�
	3. printf("%d\n",i);	-����
	4. i= i+1;
	*/



	for(int i=100;i>=0;i=i-1)
	{
		printf("%d\n",i);
	}

	for(int i=2; i<13; i=i+2)
	{
		printf("%d\n",i);
	}

	for(int i=2; i<65; i=i*2)
	{
		printf("%d\n",i);
	}

	
	
	return 0;
}

