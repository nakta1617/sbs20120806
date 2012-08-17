// 자료형.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
using namespace std;
#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{
	string str = "hello";
	str = "funxxx";

	float flt = 4476125351235125367512.7352;
	//flt = 44761253000000000000000.0000;
	double dbl = 44761253512351253751.27352;
	//dbl = 447612535123512000000.0000;

		char c = 'k';

	int integer = 10;
	integer = 20;
	integer = 600000;

	short s = 600000;

	unsigned char c2 = 127;
	c2 = 128;
	c2 = 129;

	__int64 bigint;



	vector<int> numbers;
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(50);
	numbers.push_back(70);
	numbers.push_back(-1);
	numbers.push_back(99);
	numbers.push_back(255);

	printf("size:%d\n",numbers.size());
	for(int i = 0; i<numbers.size();i++)
	{
		printf("%d\n",numbers[i]);
	}



	//push_back = 숫자를 집어넣어라

	return 0;
}

