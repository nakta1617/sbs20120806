// SoccerGame.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "player.h"
#include "Ball.h"


int _tmain(int argc, _TCHAR* argv[])
{
	player parkjisung;
	parkjisung.name = "������";
	parkjisung.nation = "���ѹα�";
	parkjisung.age = 31;
	parkjisung.height = 178;
	parkjisung.weight = 70;
	parkjisung.foot = "������";
	parkjisung.goalkeeping = 20;
	parkjisung.depensive = 70;
	parkjisung.offensive = 300;

	player neymar;
	neymar.name = "���̸���";
	neymar.age = 20;
	neymar.nation = "�����";
	neymar.height = 180;
	neymar.weight = 60;
	neymar.foot = "������";
	neymar.goalkeeping = 10;
	neymar.depensive = 30;
	neymar.offensive = 750;




	parkjisung.Shoot();
	neymar.Depense();
	return 0;
}

