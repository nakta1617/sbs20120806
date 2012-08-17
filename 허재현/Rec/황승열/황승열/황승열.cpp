// 황승열.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"



int _tmain(int argc, _TCHAR* argv[])
{
	C_CHILD ch;

	ch.setData(100);
	printf("%d\n" , ch.getData());
	printf("%d\n" , ch.getDouble());

	return 0;
}



