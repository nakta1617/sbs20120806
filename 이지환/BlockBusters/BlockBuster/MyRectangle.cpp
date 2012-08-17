#include "StdAfx.h"
#include "MyRectangle.h"
#include <Windows.h>

MyRectangle::MyRectangle(void)
{
}

int c = 0;

void MyRectangle::Draw()
{
	for( int x = m_x + 0 ; x < m_x + m_width ; x = x + 1 )
	{
		printxy( x , 0 , '0' + c);
		Sleep(30);
	}
	c = c + 1;
MyRectangle::~MyRectangle(void)
{
}
