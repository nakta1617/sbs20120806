#pragma once

#include "Body.h"
#include "Bullet.h"

#include <string>
using namespace std;


class Myairplane
{
public:
	Myairplane(void);
	~Myairplane(void);

	Body body;
	Bullet bullet;
	
	int hp;
	string name;

	void attack();
	void drop();

};

