// Sample114.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	C_CHILD cChild;
	cChild.setData(100);
	printf("%d\n" , cChild.getData());
	printf("%d\n" , cChild.getDouble());
	return 0;
}