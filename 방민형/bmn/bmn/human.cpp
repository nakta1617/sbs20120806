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
	printf("%s��(��) �Դ´�  \n",name.c_str());
}
void human::Run()
{
	printf("%s��(��) �ڴ�  \n",name.c_str());
}
void human::Walk()
{
	printf("%s��(��) �ȴ´� \n",name.c_str());
}
void human::Think()
{
	printf("%s��(��) �����Ѵ�  \n",name.c_str());
}