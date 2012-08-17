#pragma once



#include "Plane.h"
#include "Bullet.h"
#include <string>
using namespace std;

class Plane
{
public:
	Plane(void);
	~Plane(void);
	

	int planenumber;
	int wide;
	string name;

	void shot();
	void injuryed();
	void die();
	

};

