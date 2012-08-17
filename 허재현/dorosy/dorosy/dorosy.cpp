// dorosy.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "character.h"


int _tmain(int argc, _TCHAR* argv[])
{
	character c_dorosy;
	c_dorosy.speed = 8;
	c_dorosy.power = 6;
	c_dorosy.defence = 3;
	c_dorosy.name = "red"; 

	character c_lila;
	c_lila.speed = 4;
	c_lila.power = 9;
	c_lila.defence = 2;
	c_lila.name = "blue"; 

	character c_anje;
	c_anje.speed = 5;
	c_anje.power = 2;
	c_anje.defence = 9;
	c_anje.name = "green"; 


	c_dorosy.Run() ;
	c_dorosy.jump() ;
	c_dorosy.shoot() ;
	c_dorosy.dead() ;

	c_lila.Run() ;
	c_lila.jump() ;
	c_lila.shoot() ;
	c_lila.dead() ;

	c_anje.Run() ;
	c_anje.jump() ;
	c_anje.shoot() ;
	c_anje.dead() ;

	return 0;
}

