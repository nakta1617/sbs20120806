#include "StdAfx.h"
#include "human.h"


human::human(void)
{
}

void human::Eat()
{
	
	printf("%s ³È \n", name.c_str());
}

void human::Run()
{
	printf("%s ´Þ¸°´Ù \n",name.c_str());
}

void human::Walk()
{

	printf("%s ÅÍ¹÷ÅÍ¹÷ \n", name.c_str());
}

void human::Think()
{

	printf("%s »ý°¢»ý°¢»ý°¢ \n", name.c_str());
}

human::~human(void)
{
}
