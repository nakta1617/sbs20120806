// Shooting.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Airplane.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Airplane GoodPlane, BadPlane;

	GoodPlane.bullet = 10;
	GoodPlane.name = "착한비행기";
	GoodPlane.size = 10;

	BadPlane.bullet = 15;
	BadPlane.name = "나쁜비행기";
	BadPlane.size = 15;

	GoodPlane.cAllInformation();
	BadPlane.cAllInformation();
	return 0;
}

