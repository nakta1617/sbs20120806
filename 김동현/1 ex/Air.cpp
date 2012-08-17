#include "StdAfx.h"
#include "Air.h"


Air::Air(void)
{
}


Air::~Air(void)
{
}

void Air::Shoot()
{
	printf("%s이(가) 쏜다 \n", name.c_str());
}

void Air::move()
{
	printf("%s이(가) 움직인다 \n", name.c_str());
}