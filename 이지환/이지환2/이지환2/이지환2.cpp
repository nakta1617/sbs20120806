// 이지환2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Airplane.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Airplane ABC1;
	ABC1.age = 2;
    ABC1.cost = 300;
	ABC1.name = "ABC1";

	Airplane DEF1;
	DEF1.age = 3;
	DEF1.cost = 400;
	DEF1.name = "DEF1";

    Airplane GHI1;
	GHI1.age = 4;
	GHI1.cost = 500;
	GHI1.name = "GHI";


	ABC1.Shoot();
	ABC1.Control();
	ABC1.Down();

	DEF1.Shoot();
	DEF1.Control();
	DEF1.Down();

	GHI1.Shoot();
	GHI1.Control();
	GHI1.Down();


	return 0;
}

