// Class4.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <Windows.h>


void printxy( int x , int y , char ch )
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c" , ch);
}

int _tmain(int argc, _TCHAR* argv[])
{
	//(10.10)���� (10.15)���� *�� ���߱�
	//for( int x = 10 ; x < 16 ; x++ )
	//{
	//	printxy( 10 , x , '*');
	//	Sleep(30);
	//}


	//(15.10)���� (15.0) ���� *�� ���߱�
	//for( int y = 10 ; y >= 0 ; y-- )
	//{
	//	printxy( 15 , y , '*');
	//	Sleep(30);
	//}


	//(0.15)���� (0.0)���� *�� ���߱�
	//for( int y = 15 ; y >= 0 ; y-- )
	//{
	//	printxy( 0 , y , '*');
	//	Sleep(30);
	//}

	//�Ʒ����� x�� �ٲܶ����� 
	//����ȭ���� *�� x��ġ�� ���ϵ��� �ڵ����
	//int x = 10;
	//for( int y = 15 ; y >= 0 ; y-- )
	//{
	//	printxy( x , y , '*');
	//	Sleep(30);
	//	
	//}x++;

	//m_y�� ���������μ�
	//���� ���� �������� �ٲ�� ����
	//int m_y = 3;
	//for( int y = m_y ; y >= 0 ; y-- )
	//{
	//	printxy( 10 , y , '*');
	//	Sleep(30);
	//	
	//}

	//m_height�� ���ļ�
	//���̸� ������ �� �ְ� ���� height ������ŭ�� ���
	//int m_y = 15;
	//int m_height = 3;
	//for( int y = m_y ; y > m_y - m_height  ; y = y - 1 )
	//{
	//	printxy( 10 , y , '*');
	//	Sleep(100);
	//}

	// (10, 15)���� m_width��ŭ ���� �׸�����
	//int m_x = 5;
	//int m_width = 3;
	//int m_y = 15;
	//int m_height = 3;
	//for( int x = 0 ; x <  m_width  ; x++ )
	//{
	//	printxy( 10 - x , 15 , '*');
	//	Sleep(100);
	//	printf("\n");
	//}


	//����~~~~~~
	//����1.�׸�ĭ�� ���η� ��������� ĭ������ 5*6
	//for( int y = 0 ; y < 6 ; y++ )
	//{
	//	for( int x = 0 ; x < 5 ; x++ )
	//	{
	//		printxy(x , y , '*');
	//		Sleep(100);
	//	}
	//}
	//����2. ���� �ﰢ�������
	//*
	//**
	//***
	//****
	//*****
	//for(int x = 0 ; x < 5 ; x++ )
	//{
	//	for( int y = 0 ; y < x+1 ; y++ )
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//for(int x = 0 ; x < 6 ; x++ )
	//{
	//	for( int y = 6 ; y > x ; y-- )
	//	{
	//		printxy( x , y , '*');
	//		Sleep(200);
	//	}
	//}
	//����3. ���� �ﰢ�� �Ųٷ����
	//for(int x = 0 ; x < 6 ; x++ )
	//{
	//	for( int y = 0 ; y < 6 - x ; y++ )
	//	{
	//		printxy( x , y , '*');
	//		Sleep(200);
	//	}
	//}
	//����4. �Ƕ�̵�

	//for(int y = 1 ; y <= 4 ; y++ )
	//{
	//	for( int x = 4 ; x > 4 - y ; x-- )
	//	{
	//		printxy( x, y , 'A');
	//		Sleep(200);
	//	}

	//}



////////	//for(int y = 0 ; y < 4 ; y++ )
	//{
	//	for(static int z = 0 ; z < 3 ; z++ )
	//	{
	//		printf("A");
	//	}
	//	for( int x = 0 ; x < y + (y+1)  ; x++)
	//	{
	//		printxy( x, y , 'C');
	//		Sleep(200);
	//	}

	//}

	//����5. �Ƕ�̵� �Ųٷ�
	//����6. 
	//*
	//**
	//***
	//****
	//*****
	//****
	//***
	//**
	//*
	//����7.  ����6. �Ųٷ�




	return 0;
}

