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
		printf("%s�� �����ߴ�. ü���� : %d ���Ҵ�.", name.c_str(), hp-1);	
	}
	}
	


void Enemyairplane::drop()
{
	printf("%s�� �߶��ߴ�.\n", name.c_str());
}
