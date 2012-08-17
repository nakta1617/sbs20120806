#pragma once
#include "Myair.h"
#include "Enemyair.h"
#include "EnemyBullet.h"
#include "MyBullet.h"
#include <string>
using namespace std;
class Air
{
public:
	Air(void);
	~Air(void);

	Myair Myair;
	MyBullet MyBullet;
	Enemyair Enemyair;
	EnemyBullet EnemyBullet;

	void Shoot();
	void move();

	int damage;
	int life;
	string name;
	//적비행기와 아군비행기를 구분

};

