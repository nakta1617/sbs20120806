// Sample114.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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