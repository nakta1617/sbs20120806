// 어려운문제.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	/*for (int y = 10; y > -1; y = y - 1)
	{
		printxy(15, y, '*');
		Sleep(500);
	}*/
	/*
	for (int y=15;y>-1;y=y-1)
	{
		printxy(0,y,'*');
		Sleep(500);
		
	}*/
	for (int x=0 ; x<5 ; x=x+1)
	{
		for (int y = 0; y<5;y=y+1)
		{ 
			printxy(x,y,'*');
			Sleep(1000);
		}
	}


	return 0;
}
/*
printxy(y,15,'*');
Sleep(100);
printf("\n\n\n\n");*/
//가로로 네모칸이 만들어지도록
//네모칸은 사이즈는 5*6

//문제2는 .
//
//*
//**
//***
//****
//*****
//******

//문제3은.
/*  * * * * * *
    * * * * *
	* * * * 
	* * * 
	* *
	*

문제4는

      *
    * * *
  * * * * *
* * * * * * * 
문제5
* * * * * * * 
  * * * * *  
    * * *
	  *
문제6
*
**
***
****
*****
****
***
**
*

     
     *
    **
   ***
  ****
 *****
  ****
   ***
    **
     *
	 