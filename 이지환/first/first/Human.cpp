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
	printf("%s��(��) �Դ´�\n", name.c_str());
}

void Human::Walk()
{
	printf("%s��(��) �ȴ´�\n", name.c_str());
}

void Human::Run()
{
	printf("%s��(��) �ڴ�\n", name.c_str());
}

void Human::Think()
{
	printf("%s��(��) �����Ѵ�\n", name.c_str());
}