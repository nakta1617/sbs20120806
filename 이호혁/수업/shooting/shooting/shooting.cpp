// shooting.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Myairplane.h"
#include "Enemyairplane.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Myairplane myairplane;
	myairplane.hp = 10;
	myairplane.name = "비행기";

	Enemyairplane enemyairplne;
	enemyairplne.hp = 1;
	enemyairplne.name = "적기";

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

