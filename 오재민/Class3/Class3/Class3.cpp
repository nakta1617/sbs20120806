// Class3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <Windows.h>
#include "MyRectangle.h"



//void printxy( int x , int y , char ch )
//{
//	COORD pos = {x,y};
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("%c" , ch);
//}

int _tmain(int argc, _TCHAR* argv[])
{
	//ȭ��ٱ����� ���ʰ��� �����ó�� ���ۺ���
	//���Ƽ� ���´�
	// 1. �׸�ĭ�� �ֱ������� ���ݾ�
	//    ȭ�鿡 �׸��� �׸���
	// 2. ���ηδ� ���׶��, ���ηδ�
	//    X�� �׸���
	// 3. ����ؼ� �׸�ĭ�� �׸���.
	MyRectangle rectangle1;
	rectangle1.m_x = 10;
	rectangle1.m_y = 10;
	rectangle1.m_width = 3;
	rectangle1.m_height = 3;

	MyRectangle rectangle2;
	rectangle2.m_x = 15;
	rectangle2.m_y = 5;
	rectangle2.m_width = 5;
	rectangle2.m_height = 4;

	while (true)
	{
		rectangle1.Draw();
		//rectangle2.Draw();
	}

	
	







	////ȭ��ٱ��� ��۹��
	//int c = 0;
	//while(true)
	//{
	//	for( int x = 0 ; x < 50 ; x++ )
	//	{
	//		if( x < 25 )
	//		{
	//			printxy( x+1 , 0 , 'O'+c );
	//		}
	//		else 
	//		{
	//			printxy( 26 , x-25 , 'X'+c);
	//		}
	//		Sleep(30);
	//	}
	//	for( int x = 50 ; x > 0 ; x = x - 1 )
	//	{
	//		if( x > 25 )
	//		{
	//			printxy( x - 25 , 24, 'O'+c);

	//		}
	//		else
	//		{
	//			printxy( 0 , x-1 , 'X'+c);
	//		}
	//		Sleep(30);

	//	}
	//	c++;
	//	
	//}
	//printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	

//ȭ��ٱ����� ���ʱ��� �����ó�� ���ۺ���

	MyRectangle rectangle1;
	MyRectangle rectangle2;

	rectangle1.m_x = 0;
	rectangle1.m_y = 0;
	rectangle1.m_width = 10;
	rectangle1.m_height = 10;

	rectangle1.m_x = 15;
	rectangle1.m_y = 5;
	rectangle1.m_width = 5;
	rectangle1.m_height = 4;


	while(true)
	{
		rectangle1.Draw();
	}
//���Ƽ� ���´�


	return 0;
}//�ݺ��� ����Ͽ� �ִϸ��̼� ������

