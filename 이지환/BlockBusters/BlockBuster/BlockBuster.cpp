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


	/*
	
	// 0,10 ���� 0,0 ����
	for (int y = 10; y >= 0; y = y - 1)
	{
		printxy(15, y, '*');
		Sleep(100);      // ���� ������ �ӵ�!!
	}


	// 0,15 ���� 0,0 ����
	for (int y = 15; y >= 0; y = y - 1)
	{
		printxy(0, y, '*');
		Sleep(100);
	}

	




	// �Ʒ����� x�� �ٲܶ����� ���� ȭ���� *�� x��ġ�� ���ϵ��� �ڵ����
	int x = 10;
	for (int y = 15; y >= 0; y = y - 1)
	{
		printxy(x, y, '*');
		Sleep(100);
	}

	



	// m_y�� ���������μ� ���� ���� �������� �ٲ�� �����϶�
	int m_y = 50;
	for (int y = m_y; y >= 0; y = y - 1)
	{
		printxy(10, y, '*');
		Sleep(100);
	}




	// m_height�� ���ļ� ���̸� ������ �� �ְ� �����϶�
	int m_height = 3;
	int m_y = 15;
	for (int y = m_y; y > m_y - m_height; y = y - 1)
	{
		printxy(10, y, '*');
		Sleep(100);
	}

	


	// ���� ������ ����
	int m_y = 15;
	int m_height = 3;
	for (int y = 0; y < m_height; y = y + 1)
	{
		printxy(10, m_y - y, '*');
		Sleep(100);
	}



	// (10,15)���� m_width��ŭ �������� ���� �׷���
	int m_width = 3;
	for (int x = 0; x < m_width; x = x + 1)
	{
		printxy(10 - x, 15, '*');
		Sleep(100);
	}

	int m_y = 15;
	int m_height = 3;
	for (int y = 0; y < m_height; y = y + 1)
	{
		printxy(10, m_y - y, '*');
		Sleep(100);
	}


	// ���ʲ� ���� �ϰ�, ������ �ٱ��� for ������ �����Ѵ�.   (�׸�ĭ ����)
	for(int x = 0; x < 5; x = x + 1)
	{
		for (int y = 0; y < 5; y = y + 1)
		{
			printxy(x, y, '*');
			Sleep(1000);
		}
		printxy(x, 0, '*');
		Sleep(1000);
	}


    //����  ����1 ���η� �׸�ĭ�� �����������. �׸�ĭ ������� 5*6    ?????
	for(int y = 0; y < 6; y = y + 1)
	{
		for (int x = 0; x < 5; x = x + 1)
		{
			printxy(x, y, '*');
			Sleep(1000);
		}
		printxy(x, y, '*');
		Sleep(1000);
	}

		*/

    //      ����2    ????
            // *
            // **
            // ***
            // ****
            // ***** ���
	for (int y = 1; y <= 6; y = y + 1)
	{
		for (int x = 0; x < y ; x = x + 1)
		{
			printxy(x, y, '*');
			Sleep(10);
		}
		







    //      ����3   ������ ���Ʒ� ����� �����
    //      ����4 
    //      *
    //     * *
    //    * * *
    //  * * * * *
    //* * * * * * *
    //      ����5 ������ ���Ʒ� ������
    //      ����6
    //*
    //**
    //***
    //****
    //*****
    //****
    //***
    //**
    //*
    //      ����7 ������ ���������� ��Ī��Ű��


















	return 0;
}