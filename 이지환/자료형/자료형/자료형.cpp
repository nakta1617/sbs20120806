// �ڷ���.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <string>      // ���� ����
using namespace std;

#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{
	string str = "hello";
	str = "funxxx";

	float flt = 4.47864684684645;   // float �� �Ҽ��� ǥ��   ���е� : 7�ڸ�
	double dbl = 4.47864684684645;  // double                ���е� : 14�ڸ�

	char c = 'k';


	int integer = 10;
	integer = 20;
	integer = 600000;

	// short - �������� : -32768~32767    ( 32��Ʈ ��ǻ�� �̸� )
	short s = 600000;

	// char - ���� �ϳ�(����):-128~127
	c = 128; // -128�� �ȴ�
	c = 127; 
	c = 129; // -127
	// long - ���� : -2147483648~2147483647     (32��Ʈ ��ǻ�� �̻� )
	// int - ��踶�� �ٸ���.    ( ������󿡼��� : -2147483648~2147483647 )
	// _int64  - ���� ū ����
	// DWORD aad;   :   long �� ����

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

