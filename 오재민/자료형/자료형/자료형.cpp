// 자료형.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string> 
using namespace std;
#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{
	int integer = 10 ; 
	integer = 600000 ;

	string str = "Hello";
	str = "funxxx";

	//integer = 4.4;

	float flt = 4.45489461842;//숫자 7자리까지 파악
	double dbl = 4.445984214946198;//
	
	char c = 'c';
	short s = 600000;

	vector<int>numbers;
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(50);
	numbers.push_back(70);
	numbers.push_back(-1);
	numbers.push_back(99);
	numbers.push_back(255);

	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);
	printf("%d\n", numbers[2]);

	printf("size : %d \n",numbers.size());

	for( int i = 0 ; i < numbers.size() ; i++ )
	{
		printf("%d\n", numbers[i]);
	}

	vector<string>strings;
	strings.push_back("sgasdfg");
	strings.push_back("sgasdfg");
	strings.push_back("sgasdfg");
	for( int i = 0 ; i < strings.size() ; i++ )
	{
		printf("%s\n", strings[i].c_str());
	}



	return 0;
}

