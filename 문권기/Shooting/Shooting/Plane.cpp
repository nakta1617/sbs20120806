#include "StdAfx.h"
#include "Plane.h"


Plane::Plane(void)
{

}


Plane::~Plane(void)
{
}

void Plane::shot()
{
	printf("%s이(가) 총알을 쐈다\n",name.c_str());
}

void Plane::injuryed()
{
	printf("%s이(가) 피해를 입었다.\n",name.c_str());
}

void Plane::die()
{
	printf("%s이(가) 죽었다.\n",name.c_str());
}
