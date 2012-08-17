#pragma once

#include "Head.h"
#include "Chest.h"
#include "Stomach.h"
#include "Arm.h"
#include "Leg.h"

#include <string>
using namespace std;

class Human
{
public:
	Human(void);
	~Human(void);

	Head head;
	Chest chest;
	Stomach stomach;
	Arm leftArm;
	Arm rightArm;
	Leg leftLeg;
	Leg rightLeg;

	int age;
	int height;
	int weight;
	string name;

	void Eat();
	void Walk();
	void Run();
	void Think();
};

