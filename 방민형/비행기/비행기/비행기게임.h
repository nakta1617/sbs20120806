#pragma once

#include "Badplane.h"
#include "Bullet.h"
#include "Plane.h"

class 비행기게임
{
public:
	비행기게임(void);
	~비행기게임(void);



	Plane plane;
	Bullet bullet;
	Badplane badplane;

};

