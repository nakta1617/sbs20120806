#include "StdAfx.h"
#include "Airplane.h"


Airplane::Airplane(void)
{
}


Airplane::~Airplane(void)
{
}

void Airplane::cAllInformation()
{
	printf("%s의 총알의 수는 %d 이고 크기는 %d 이다\n",name.c_str(), bullet, size);
}
