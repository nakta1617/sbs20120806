// 1 ex.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Air.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Air red;
	
	red.damage = 10;
	red.life = 100;
	red.name = "����";
	red.Shoot();
	red.move();

	Air black;
	black.damage = 10;
	black.life = 10;
	black.name = "��";
	black.Shoot();
	black.move();

	return 0;
}

