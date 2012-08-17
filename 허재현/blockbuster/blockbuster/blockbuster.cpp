// blockbuster.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


#include <windows.h>


void printxy(int x, int y, char ch)

{
 COORD pos={x,y};
 SetConsoleCursorPosition(
  GetStdHandle(STD_OUTPUT_HANDLE), pos
  );
 printf("%c", ch);

}

int _tmain(int argc, _TCHAR* argv[])


{ 
 /*for (int x=0; x <= 20; x = x + 1)
    {
 
     printxy (x,0, '*');
     printxy (x-1,0, ' ');
  
     Sleep(20);
    }
 for (int y=0; y<=20; y= y + 1)
    {

     printxy (20,y,  '*');
     printxy (20,y-1,' ');

     Sleep(20);
     }
  for (int x=20; x >= 0; x = x - 1)
     {
 
     printxy (x,20, '*');
     printxy (x+1,20, ' ');
  
     Sleep(20);
     }
   for (int y=20; y>=0; y= y -1)
    {

    printxy (0,y,  '*');
    printxy (0,y+1,' ');

    Sleep(20);
    }
   int h=0;
   int y=0;
   for (int x=0; x <= 20; x = x + 1)
    {
     h = x;
  y = h;
     printxy (x, y, '*');
  printxy (x-1, y-1, ' ');
     Sleep(100);
    }
 for (int y=20; y>=0; y= y -1)
   {

  printxy (20,y,  '*');
  printxy (20,y+1,  ' ');
  Sleep(20);
   }
  
  
  for (int x=20 ; x >= 0; x = x - 1)
   {
   
   y = y+1;
   printxy (x, y-21, '*');
   printxy (x+1,y-22, ' ');
  
  
    Sleep(20);
   }

 
 

 return 0;*/

 

 

/*for (int y= 0; y < 5; y = y+1)
{
 for(int x = 0; x < 5; x = x + 1)
 {
  printxy(x,y, '*');
  Sleep(100);
 }

 */

   /*for (int x = 0; x < 5; x = x+1)
    {
  for(int y = 5; y > 0+x; y = y - 1)
  { 
  
  
  printxy(x,y, '*');

  Sleep(100);
  }

/* for (int x = 0; x < 5; x = x+1)
    {
  for(int y = 0; y < 5-x; y = y + 1)
  { 
  
  
  printxy(x,y, '*');

  Sleep(100);
  }

  */

 

 for (int x = 0; x <5; x = x+1)
    {
  for(int y = 4; y > 4-x ; y = y - 1)
  { 
  
  
  printxy(x, y, '*');

  Sleep(100);
  }
    }
 int a=0;
 for (int x = 5 ; x <= 7 ; x = x + 1)
  { 
  a=a+1;
  for(int y = 4; y > 0+a ; y = y - 1)
  {
  
  printxy(x, y, '*');

  Sleep(100);

  }

  }


/*for (int x = 0 ; x < 5; x = x+1)
    {
  for(int y = 0 ; y < x ; y = y + 1)
  { 
  
  
  printxy(x, y, '*');

  Sleep(100);
  }
    }
int a=0;
for (int x = 5 ; x <=7; x = x+1)
    {a=a+1;
  for(int y = 0 ; y < 4-a ; y = y + 1)
  { 
  
  
  printxy(x, y, '*');

  Sleep(100);
  }
    }
 */

/*for (int x = 0 ; x < 5; x = x+1)
    {
  for(int y = x ; y < 4 ; y = y + 1)
  { 
  
  
  printxy(x, y, '*');

  Sleep(100);
  }
    }
int a=0;
for (int x = 0 ; x < 5; x = x+1)

    { a=a+1;
  for(int y = 4 ; y <=7-a ; y = y + 1)
  { 
  
  
  printxy(x, y, '*');

  Sleep(100);
  }
    }

 */
/*for (int x = 0; x < 4; x = x+1)
    {
  for(int y = 3; y >= 3-x ; y = y - 1)
  { 
  
  
  printxy(x, y, '*');

  Sleep(100);
  }
    }
 for (int x = 0; x <4; x = x+1)
    {
  for(int y = 4 ; y <= 4+x ; y = y + 1)
  { 
   
  
  printxy(x, y, '*');

  Sleep(100);
  }
    }*/
}