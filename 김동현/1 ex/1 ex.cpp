// 1 ex.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Air.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Air red;
	
	red.damage = 10;
	red.life = 100;
	red.name = "빨강";
	red.Shoot();
	red.move();

	Air black;
	black.damage = 10;
	black.life = 10;
	black.name = "블랙";
	black.Shoot();
	black.move();

	return 0;
}

