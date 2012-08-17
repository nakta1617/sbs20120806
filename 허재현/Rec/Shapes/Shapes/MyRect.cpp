#include "StdAfx.h"
#include "MyRect.h"


MyRect::MyRect(void)
{
}


MyRect::~MyRect(void)
{
}

void MyRect::Draw();
{
	for (int y= 0; y < 5; y = y+1)
	{
		for(int x = 0; x < 5; x = x + 1)
		{
			printxy(x,y, '*');
			Sleep(0);
		}

	}


}