#include "StdAfx.h"
#include "human.h"


human::human(void)
{
}

void human::Eat()
{
	
	printf("%s �� \n", name.c_str());
}

void human::Run()
{
	printf("%s �޸��� \n",name.c_str());
}

void human::Walk()
{

	printf("%s �͹��͹� \n", name.c_str());
}

void human::Think()
{

	printf("%s ������������ \n", name.c_str());
}

human::~human(void)
{
}
