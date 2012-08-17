// BlockBuster.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <windows.h>



void printxy(int x, int y,char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("%c",ch);
}


int _tmain(int argc, _TCHAR* argv[])
{
	/*
	for(int x=0; x<80;x=x+1)
	{
		printxy(x,x,'*');
		Sleep(1000);
	}
	*/
	
	/*
	for(int x=0;x<79;x=x+1)
	{
		printxy(x-1,0,' ');
		printxy(x,0,'*');
		Sleep(50);	
	}
	for(int y=0;y<60;y=y+1)
	{
		printxy(78,y-1,' ');
		printxy(78,y,'*');
		Sleep(50);
	}
	
	for(int x=79;x>=0;x=x-1)
	{
		printxy(x+1,59,' ');
		printxy(x,59,'*');
		Sleep(50);
	}
	for(int y=59;y>=0;y=y-1)
	{
		printxy(0,y+1,' ');
		printxy(0,y,'*');
		Sleep(50);
	}
	*/



	/*
	for(int y=0;y<80;y=y+1)
	{
		printxy(6,y-1,' ');
		printxy(6,y,'$');
		Sleep(100);
	}
	*/
	/*
	//(10,10)~(10,15) 선 긋기
	for(int y=10;y<=15;y++)
	{
		printxy(10,y,'*');
	}
	//(15,10)~ (15,0)선 긋기
	for(int y=15;y>=0;y--)
	{
		printxy(15,y,'*');
	}
	//(0,15)~(0,0)
	for(int y = 15;y>=0;y--)
	{
		printxy(0,y,'*');
	}
	*/
	//아래에서, x를 바꿀때마다 실제 화면의 *의 x위치가 변하도록 코드 수정
	
	/*
	int x= 30;
	for(int y = 15;y>=0;y--)
	{
		
		printxy(x,y,'*');
		Sleep(100);
	}
	*/
	// m_y를 수정 함으로써 선의 세로 시작점이 바뀌도록
	/*
	int m_y= 5;
	for(int y = m_y ;y>=0;y--)
	{

		printxy(10,y,'*');
		Sleep(100);
	}
	*/

	//m_height를 고쳐서 높이를 조정할수있게 수정
	/*
	int m_y= 15;
	int m_height = 3;	//3번만 순회
	for(int y = m_y ;y > m_y-m_height;y--)
	{
		printxy(10,y,'*');
		Sleep(100);
	}
	*/
	//(10,15)에서 m_width만큼 왼쪽으로 선을 그리세요
	
	/*
	int m_width = 3;	//3번만 순회
	for(int x = 0 ;x<m_width;x++)
	{
		printxy(10-x,15,'*');
		printf("\n");
		Sleep(100);
	}
	int m_y= 15;
	int m_height = 3;
	for(int y = m_y ;y > m_y-m_height;y--)
	{
		printxy(10,y,'*');
		Sleep(100);
	}
	*/
 
	/*
	for(int y=0;y<6;y++)
	{
		for(int x= 0;x<5;x++)
		{
			printxy(x,y,'*');
			Sleep(100);
		}
		
	}
	*/
	
/*
for(int y=0;y<=5;y++)
{
	for(int x=1; x<=1+y;x++)
	{
		printxy(x,y,'*');
		Sleep(100);
	}
}
*/

for(int y=1;y<=6;y++)
{
	for(int x=1; x<=7-y;x++)
	{
		printxy(x,y,'*');
		Sleep(100);
	}
}


/*
for(int y= 1;y<=4;y++)
{
	for(int x= 4; x>4-y;x--)
	{
		printxy(x,y,'*');
		Sleep(100);
	}
}
printf("\n");
*/	

	
	return 0;
}

