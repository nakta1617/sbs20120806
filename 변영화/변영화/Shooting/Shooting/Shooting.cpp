// Shooting.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Airplane.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Airplane GoodPlane, BadPlane;

	GoodPlane.bullet = 10;
	GoodPlane.name = "���Ѻ����";
	GoodPlane.size = 10;

	BadPlane.bullet = 15;
	BadPlane.name = "���ۺ����";
	BadPlane.size = 15;

	GoodPlane.cAllInformation();
	BadPlane.cAllInformation();
	return 0;
}

