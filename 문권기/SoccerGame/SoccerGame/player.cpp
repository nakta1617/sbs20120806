#include "StdAfx.h"
#include "player.h"


player::player(void)
{
}


player::~player(void)
{
}

void player::Shoot()
{
	printf("%s������ ���� ����\n",name.c_str());
}

void player::Handle()
{
	printf("%s������ �ڵ� ��Ģ�� �ߴ�\n.",name.c_str());
}

void player::Dribble()
{
	printf("%s������ �帮���� �ߴ�\n.",name.c_str());
}

void player::Depense()
{
	printf("%s������ �����ߴ�\n.",name.c_str());
}

void player::Run()
{
	printf("%s������ �޸���.",name.c_str());
}

void player::ShortPass()
{
	printf("%s������ ª�� �н��ߴ�.",name.c_str());
}

void player::LongPass()
{
	printf("%s������ ��� �н��ߴ�..",name.c_str());
}
