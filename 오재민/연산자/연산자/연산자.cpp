// ������.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

void PrintPeri( int Age );

int _tmain(int argc, _TCHAR* argv[])
{
	int input = 0;
	
	printf("���̰�? : ");
	scanf("%d",&input);

	PrintPeri( input );

	return 0;
}
void PrintPeri( int Age )
{
	if( 1 < Age && 11 > Age)
	{
		printf("����\n");
	}
	else if( 11 < Age &&  21 > Age)
	{
		printf("û�ҳ�\n");
	}
	else if( 21 < Age &&  31 > Age)
	{
		printf("������\n");
	}
	else if( 31 < Age &&  41 > Age)
	{
		printf("�߳�\n");
	}
	else if( 41 < Age &&  100 > Age)
	{
		printf("���\n");
	}

}

