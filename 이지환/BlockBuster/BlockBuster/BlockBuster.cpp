// blockbuster.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <windows.h>

void printxy(int x,int y,char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", ch);
}

int _tmain(int argc, _TCHAR* argv[])
{
	printxy(1, 1, '*');
	/*
	printxy(1, 1, '*');
	printxy(2, 2, '*');
	printxy(3, 3, '*');
	printxy(4, 4, '*');
	printxy(5, 5, '*');
	printxy(6, 6, '*');
	printxy(7, 7, '*');
	printxy(8, 8, '*');
	printxy(9, 9, '*');
	printxy(10, 10, '*');
	

	for (int x = 0; x < 80; x = x + 1)
	{
		printxy(x - 1, 5, ' ');
		printxy(x, 5, '*');
		Sleep(500);
	}

	// ������ ������ �������� �̵��غ���
	// ������ �Ʒ��� �̵��غ���
	// �Ʒ����� ���� �̵��غ���
	// �밢�� �̵�
	// ȭ���� �¿�� �Դٰ���
	// ȭ���� ���Ʒ��� �Դٰ���
	// ȭ�� �ٱ��� ��۹�� ��� ����
	// ȭ�� �ٱ����� ���ʰ��� �����ó�� ��۹��
	// ���Ƽ� ���´�
	// ����ؼ� �׸�ĭ �����
	
	rectangle;
	while (true) 
	{
		rectangle.Draw();
		*/

		return 0;
		}