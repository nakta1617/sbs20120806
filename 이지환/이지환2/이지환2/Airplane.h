#pragma once

#include "Engine.h"
#include "Pilot.h"
#include "Wing.h"

#include <string>
using namespace std;

class Airplane
{
public:
	Airplane(void);
	~Airplane(void);


	Engine rightEngine;
	Engine leftEngine;
    Pilot pilot;
	Wing rightWing;
	Wing leftWing;

	string name;
	int age;
	int cost;

	void Shoot();
	void Control();
	void Down();
};

