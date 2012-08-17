// 자료형.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>      // 글자 쓰기
using namespace std;

#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{
	string str = "hello";
	str = "funxxx";

	float flt = 4.47864684684645;   // float 는 소수를 표현   정밀도 : 7자리
	double dbl = 4.47864684684645;  // double                정밀도 : 14자리

	char c = 'k';


	int integer = 10;
	integer = 20;
	integer = 600000;

	// short - 작은숫자 : -32768~32767    ( 32비트 컴퓨터 미만 )
	short s = 600000;

	// char - 문자 하나(숫자):-128~127
	c = 128; // -128이 된다
	c = 127; 
	c = 129; // -127
	// long - 숫자 : -2147483648~2147483647     (32비트 컴퓨터 이상 )
	// int - 기계마다 다르다.    ( 윈도우상에서는 : -2147483648~2147483647 )
	// _int64  - 아주 큰 정수
	// DWORD aad;   :   long 과 같음

	unsigned char c2 = 127;
	c2 = 128;
	c2 = 129;
	
	vector<int> numbers;
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(50);
	numbers.push_back(70);
	numbers.push_back(99);


	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);
	printf("%d\n", numbers[2]);
	printf("%d\n", numbers[3]);
	printf("%d\n", numbers[4]);
	printf("%d\n", numbers[5]);

	printf("size:%d\n", numbers.size());

	for (int i = 0; i < 3; i = i + 1 )
	{
		printf("%d\n", numbers[i]);
	}

	return 0;
}

