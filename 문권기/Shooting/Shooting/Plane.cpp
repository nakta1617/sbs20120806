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
	printf("%s��(��) �Ѿ��� ����\n",name.c_str());
}

void Plane::injuryed()
{
	printf("%s��(��) ���ظ� �Ծ���.\n",name.c_str());
}

void Plane::die()
{
	printf("%s��(��) �׾���.\n",name.c_str());
}
