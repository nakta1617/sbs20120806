// 1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	kimjunsung.name ="김준성";
	Human ohjaemin;
	ohjaemin.age = 15;
	ohjaemin.height = 120;
	ohjaemin.weight = 40;
	ohjaemin.name ="오재민";
	Human heojaehyun;
	heojaehyun.age = 25;
	heojaehyun.height = 180;
	heojaehyun.weight = 60;
	heojaehyun.name ="허재현";
	Human ohchangkeun;
	ohchangkeun.age = 22;
	ohchangkeun.height = 180;
	ohchangkeun.weight = 50;
	ohchangkeun.name ="오창근";

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
	*/
	/*
	while(true)
	{
		kimjunsung.Think();
		ohjaemin.Think();
		heojaehyun.Think();
		ohchangkeun.Think();
	}
	*/
	/*
	for(int i = 10; i<21;i=i+1)
	{
		printf("%d\n",i);
	}

	int year = 2012;
	// == int year = 2012;
	*/
	/*
	1. int i =10;			-i는 10
	2. i<21;				-i가 21보다작다
	3. printf("%d\n",i);	-실행
	4. i= i+1;				-i에 10+1을 넣는다
	2. i<21;				-i가 21보다작다
	3. printf("%d\n",i);	-실행
	4. i= i+1;				
	2. i<21;				-i가 21보다작다
	3. printf("%d\n",i);	-실행
	4. i= i+1;				
	2. i<21;				-i가 21보다작다
	3. printf("%d\n",i);	-실행
	4. i= i+1;
	*/



	//1부터 10까지 합을 구해라
	int sum = 0;
	for(int i=1; i<=10; i=i+1)
	{
			//변하는 i를 쓸 수 있게 된다.
			//1~10		
		sum = sum + i;	
	}
	printf("%d\n",sum);
	//0+1 = 1
	//1+2 = 3
	//3+3 = 6
	//....
	
	int num =1;
	for(int i=1;i>=10;i++)
	{
		num = num+2;
		printf("%d\n",num);
	}

	
	return 0;
}

