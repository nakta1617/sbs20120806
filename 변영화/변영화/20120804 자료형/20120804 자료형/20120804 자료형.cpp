// 20120804 자료형.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
#include <vector>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int integer = 600000;
	short s = 600000;
	char c = 128;
	c = 129;

	vector<int> numbers;
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(50);
	printf("size : %d\n",numbers.size());
	printf("%d\n",numbers[0]);
	printf("%d\n",numbers[1]);
	printf("%d\n",numbers[2]);

	for(int i = 0; i < numbers.size(); i = i + 1)
	{
		printf("%d\n", numbers[i]);
	}
	unsigned char c2 = 127;
	c2 = 128;
	c2 = 129;
	return 0;
}

