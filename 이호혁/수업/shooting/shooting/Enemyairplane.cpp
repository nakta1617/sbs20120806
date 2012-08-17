#include "StdAfx.h"
#include "Enemyairplane.h"


Enemyairplane::Enemyairplane(void)
{
}


Enemyairplane::~Enemyairplane(void)
{
}

void Enemyairplane::attack()
{
	if (hp<=0)
	{
		printf("%s가 공격했다. 체력이 : %d 남았다.", name.c_str(), hp-1);	
	}
	}
	


void Enemyairplane::drop()
{
	printf("%s가 추락했다.\n", name.c_str());
}
