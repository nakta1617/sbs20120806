// 2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "human.h"

int _tmain(int argc, _TCHAR* argv[])
{
	human kimjunsung;
	kimjunsung.age =10;
	kimjunsung.height = 190;
	kimjunsung.weight = 30;
	kimjunsung.name = "���ؼ�";



	human ohjaemin;
	ohjaemin.age =10;
	ohjaemin.height = 190;
	ohjaemin.weight = 30;
	ohjaemin.name = "�����";

	human heojaehyun;
	heojaehyun.age =10;
	heojaehyun.height = 190;
	heojaehyun.weight = 30;
	heojaehyun.name = "������";

	human ohchangkeun;
	ohchangkeun.age =10;
	ohchangkeun.height = 190;
	ohchangkeun.weight = 30;
	ohchangkeun.name = "�ȳȳ�";

	kimjunsung.Eat();
	ohjaemin.Run();
	heojaehyun.Walk();
	ohchangkeun.Think();
	int num = 0;
	
	for(int i=1; i<10; i= i+2)
	{
		num=i+1;
		printf("%d \n",num+num );
	}
	

	string name;
	int age;
	int height;
	int weight;
	

	return 0;
}

