// shooting.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Myairplane.h"
#include "Enemyairplane.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Myairplane myairplane;
	myairplane.hp = 10;
	myairplane.name = "�����";

	Enemyairplane enemyairplne;
	enemyairplne.hp = 1;
	enemyairplne.name = "����";

	myairplane.attack();
	enemyairplne.attack();
	enemyairplne.drop();

	myairplane.attack();
	enemyairplne.attack();
	enemyairplne.drop();

	myairplane.attack();
	enemyairplne.attack();
	enemyairplne.drop();

	myairplane.attack();
	enemyairplne.attack();
	enemyairplne.drop();

	myairplane.attack();
	enemyairplne.attack();
	enemyairplne.drop();

	myairplane.attack();
	enemyairplne.attack();
	enemyairplne.drop();

	myairplane.attack();
	enemyairplne.attack();
	enemyairplne.drop();

	myairplane.attack();
	enemyairplne.attack();
	enemyairplne.drop();

	myairplane.attack();
	enemyairplne.attack();
	enemyairplne.drop();

	myairplane.attack();
	enemyairplne.attack();
	enemyairplne.drop();
	myairplane.drop();
	
	return 0;
}

