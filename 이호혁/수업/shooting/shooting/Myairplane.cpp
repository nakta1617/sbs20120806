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
	printf("%s�� �����ߴ�. ü���� : %d ���Ҵ�. \n ", name.c_str(), hp);
}


void Myairplane::drop()
{
	printf("%s�� �߶��ߴ�.\n", name.c_str());
}
