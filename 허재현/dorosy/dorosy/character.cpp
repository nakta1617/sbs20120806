#include "StdAfx.h"
#include "character.h"


character::character(void)
{
}


character::~character(void)
{
}


void character::Run()
{

	printf("%s �޸���.\n",name.c_str());
}
void character::jump()
{

	printf("%s ����.\n",name.c_str());
}

void character::shoot()
{

	printf("%s ���.\n",name.c_str());
}
void character::dead()
{

	printf("%s �״´�.\n",name.c_str());
}
