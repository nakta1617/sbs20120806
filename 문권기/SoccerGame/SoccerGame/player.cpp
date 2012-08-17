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
	printf("%s선수가 슛을 쐈다\n",name.c_str());
}

void player::Handle()
{
	printf("%s선수가 핸들 반칙은 했다\n.",name.c_str());
}

void player::Dribble()
{
	printf("%s선수가 드리블은 했다\n.",name.c_str());
}

void player::Depense()
{
	printf("%s선수가 수비했다\n.",name.c_str());
}

void player::Run()
{
	printf("%s선수가 달린다.",name.c_str());
}

void player::ShortPass()
{
	printf("%s선수가 짧게 패스했다.",name.c_str());
}

void player::LongPass()
{
	printf("%s선수가 길게 패스했다..",name.c_str());
}
