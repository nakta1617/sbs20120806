// Shooting.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Plane.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Plane airplane;
	airplane.planenumber = 1;
	airplane.wide = 100;
	airplane.name = "airplane";

	Plane zetplane;
	zetplane.planenumber = 2;
	zetplane.wide = 200;
	zetplane.name = "zetplane";
	
	airplane.shot();
	zetplane.injuryed();

	zetplane.shot();
	airplane.injuryed();

	airplane.die();

	return 0;
}

