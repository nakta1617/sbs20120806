// blockbuster.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <windows.h>

void printxy(int x,int y,char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos
	);
	printf("%c", ch);
}

int _tmain(int argc, _TCHAR* argv[])
{
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
	*/
	/*
	for (int x = 0; x < 80; x = x + 1)
	{
		printxy(x - 1, 5, ' ');
		printxy(x, 5, '*');
		Sleep(500);
	}
	*/
	// ������ ������ �������� �̵��غ���!
	// ������ �Ʒ��� �̵��غ���
	// �Ʒ����� ���� �̵��غ���
	// �밢�� �̵�!
	// ȭ���� �¿�� �Դٰ���
	// ȭ���� ���Ʒ��� �Դٰ���
	// ȭ�� �ٱ��� ��۹�� ��� ����
	// ȭ�� �ٱ����� ���ʰ��� �����ó�� ��۹��
	// ���Ƽ� ���´�
	

	// ȭ�鿡 (10, 10) ~ (10, 15)���� 
	// ���� �׷�������
	// printxy�� �̿�
	/*
	for (int y = 10; y < 16; y = y + 1)
	{
		printxy(10, y, '*');
	}
	*/

	// (15, 10)���� (15, 0) ����
	// *�� ���� �׾����
	/*
	for (int y = 10; y >= 0; y = y - 1)
	{
		printxy(15, y, '*');
		Sleep(100);
	}
	*/
	// (0, 15)���� (0, 0)����
	// *�� ���� �׾����
	/*
	for (int y = 15; y >= 0; y = y - 1)
	{
		printxy(0, y, '*');
		Sleep(100);
	}
	*/

	// �Ʒ�����, x�� �ٲܶ�����
	// ���� ȭ���� *�� x��ġ�� ���ϵ���
	// �ڵ带 �����ϼ���
	/*
	int x = 0;
	for (int y = 15; y >= 0; y = y - 1)
	{
		printxy(x, y, '*');
		Sleep(100);
	}
	*/


	// m_y�� ���������μ�
	// ���� ���� �������� �ٲ��
	// �����ϼ���
	/*
	int m_y = 3;
	for (int y = m_y; y >= 0; y = y - 1)
	{
		printxy(10, y, '*');
		Sleep(100);
	}
	*/

	// m_height�� ���ļ�
	// ���̸� ���� �� �� �ְ� ����
	/*
	int m_y = 15;
	int m_height = 3;	// 3���� ��ȸ
	for (int y = m_y; y > m_y - m_height; y = y - 1)
	{
		printxy(10, y, '*');
		Sleep(1000);
	}
	*/
	/*
	int m_y = 15;
	int m_height = 3;	// 3���� ��ȸ
	for (int y = 0; y < m_height; y = y + 1)
	{
		printxy(10, m_y - y, '*');
		Sleep(1000);
	}
	*/
	// (10, 15)����
	// m_width��ŭ �������� ����
	// �׸�����
	/*
	int m_width = 5;
	for (int x = 0; x < m_width; x = x + 1)
	{
		printxy(10 - x, 15, '*');
		Sleep(1000);
	}
	int m_y = 15;
	int m_height = 5;
	for (int y = 0; y < m_height; y = y + 1)
	{
		printxy(10, m_y - y, '*');
		Sleep(1000);
	}
	*/
/*
	for (int x = 0; x < 5; x = x + 1)	
	{
		for (int y = 0; y < 5; y = y + 1)
		{
			printxy(x, y, '*');
			Sleep(1000);
		}
	}
	*/
	// ���� 1.
	// ���η� �׸�ĭ�� �����������.
	// �׸�ĭ ������� 5*6
/*
	for (int y = 0; y < 6; y = y + 1)	
	{
		for (int x = 0; x < 5; x = x + 1)
		{
			printxy(x, y, '*');
			Sleep(10);
		}
	}
	*/

	// ����2.
	// *
	// * *
	// * * *
	// * * * *
	// * * * * *
	// * * * * * *
/*
	for (int y = 1; y <= 6; y = y + 1)	
	{
		for (int x = 0; x < y ; x = x + 1)
		{
			printxy(x, y, '*');
			Sleep(10);
		}
	}
	*/

	// ����3.
	// * * * * * *
	// * * * * *
	// * * * *
	// * * *
	// * *
	// * 
/*
	for (int y = 1; y <= 6; y = y + 1)	
	{
		for (int x = 1; x <= 7 - y ; x = x + 1)
		{
			printxy(x, y, '*');
			Sleep(10);
		}
	}
	*/
	// ����4.
	// *
	// * * *
	// * * * * *
	// * * * * * * *

	//       *	4���� �����ؼ� 1��
	//     * *	4���� �����ؼ� 2��
	//   * * *	4���� �����ؼ� 3��
	// * * * *	4���� �����ؼ� 4��

	//        
	//         *
	//         * *
	//         * * *

	//       *
	//     * * *
	//   * * * * *
	// * * * * * * *
	for (int y = 1; y <= 4; y = y + 1)	
	{
		for (int x = 4; x > 4 - y; x = x - 1)
		{
			printxy(x, y, '*');
			Sleep(10);
		}
	}

	// ����5.
	// * * * * * * *
	//   * * * * *
	//     * * *
	//       *

	// ����6.
	// *
	// * *
	// * * *
	// * * * *
	// * * * * *
	// * * * *
	// * * *
	// * *
	// *

	// ����7.
	//         *
	//       * *
	//     * * *
	//   * * * *
	// * * * * *
	//   * * * *
	//     * * *
	//       * *
	//         *

	return 0;
}

