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
	printf("%s��(��) ��� \n", name.c_str());
}

void Air::move()
{
	printf("%s��(��) �����δ� \n", name.c_str());
}