#include "StdAfx.h"
#include "Human.h"


Human::Human(void)
{
}


Human::~Human(void)
{
}

void Human::Eat()
{
	printf("%s이(가) 먹는다\n", name.c_str());
}

void Human::Walk()
{
	printf("%s이(가) 걷는다\n", name.c_str());
}

void Human::Run()
{
	printf("%s이(가) 뛴다\n", name.c_str());
}

void Human::Think()
{
	printf("%s이(가) 생각한다\n", name.c_str());
}





