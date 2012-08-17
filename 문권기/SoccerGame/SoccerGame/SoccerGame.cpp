// SoccerGame.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "player.h"
#include "Ball.h"


int _tmain(int argc, _TCHAR* argv[])
{
	player parkjisung;
	parkjisung.name = "박지성";
	parkjisung.nation = "대한민국";
	parkjisung.age = 31;
	parkjisung.height = 178;
	parkjisung.weight = 70;
	parkjisung.foot = "오른발";
	parkjisung.goalkeeping = 20;
	parkjisung.depensive = 70;
	parkjisung.offensive = 300;

	player neymar;
	neymar.name = "네이마르";
	neymar.age = 20;
	neymar.nation = "브라질";
	neymar.height = 180;
	neymar.weight = 60;
	neymar.foot = "오른발";
	neymar.goalkeeping = 10;
	neymar.depensive = 30;
	neymar.offensive = 750;




	parkjisung.Shoot();
	neymar.Depense();
	return 0;
}

