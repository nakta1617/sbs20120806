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
	// flt = 4476125300000000000000.0000;
	double dbl = 447612535123512536751.27352;
	// dbl = 447612535123512000000.00000;

	char c = 'k';

	int integer = 10;
	integer = 20;
	integer = 600000;

	short s = 600000;

	// -128~127
	c = 127;
	c = 128;	// -128이 되어버린다
	c = 129;	// -127
	
	__int64 bigint;

	unsigned char c2 = 127;
	c2 = 128;
	c2 = 129;

	vector<int> numbers;
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(50);
	numbers.push_back(70);
	numbers.push_back(-1);
	numbers.push_back(99);
	numbers.push_back(255);

	printf("size:%d\n", numbers.size());
	for (int i = 0; i < numbers.size(); i = i + 1)
	{
		int num = numbers[i];
		printf("%d\n", num);
	}

	vector<string> strings;
	strings.push_back("asdasdsadsad");
	strings.push_back("1111");
	strings.push_back("a8a8a8a8");
	strings.push_back("908fu9asu");
	strings.push_back("yug8");

	for (int i = 0; i < strings.size(); i = i + 1)
	{
		string str = strings[i];
		printf("%s\n", str.c_str());
	}

	class MyRect
	{
	public:
		int x;
	};

	vector<MyRect> rects;
	MyRect rect1;
	rect1.x = 1;
	rects.push_back(rect1);
	MyRect rect2;
	rect2.x = 2;
	rects.push_back(rect2);
	MyRect rect3;
	rect3.x = 3;
	rects.push_back(rect3);
	MyRect rect4;
	rect4.x = 4;
	rects.push_back(rect4);
	
	for (int i = 0; i < rects.size(); i = i + 1)
	{
		MyRect rect = rects[i];
		printf("%d\n", rect.x);
	}

	return 0;
}

