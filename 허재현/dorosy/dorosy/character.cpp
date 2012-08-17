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

	printf("%s ´Þ¸°´Ù.\n",name.c_str());
}
void character::jump()
{

	printf("%s Á¡ÇÁ.\n",name.c_str());
}

void character::shoot()
{

	printf("%s ½ð´Ù.\n",name.c_str());
}
void character::dead()
{

	printf("%s Á×´Â´Ù.\n",name.c_str());
}
