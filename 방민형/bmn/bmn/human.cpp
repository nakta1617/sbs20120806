#include "StdAfx.h"
#include "human.h"


human::human(void)
{
}


human::~human(void)
{
}

void human::Eat()
{
	printf("%s이(가) 먹는다  \n",name.c_str());
}
void human::Run()
{
	printf("%s이(가) 뛴다  \n",name.c_str());
}
void human::Walk()
{
	printf("%s이(가) 걷는다 \n",name.c_str());
}
void human::Think()
{
	printf("%s이(가) 생각한다  \n",name.c_str());
}