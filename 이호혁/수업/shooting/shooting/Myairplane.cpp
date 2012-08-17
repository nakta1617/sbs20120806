#include "StdAfx.h"
#include "Myairplane.h"


Myairplane::Myairplane(void)
{
}


Myairplane::~Myairplane(void)
{
}
	

void Myairplane::attack()
{
	printf("%s가 공격했다. 체력이 : %d 남았다. \n ", name.c_str(), hp);
}


void Myairplane::drop()
{
	printf("%s가 추락했다.\n", name.c_str());
}
