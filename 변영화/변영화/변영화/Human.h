#pragma once

#include "Arm.h"
#include "Chest.h"
#include "Head.h"
#include "Leg.h"
#include "Stomach.h"

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
	
	string name;
	int age;
	int height;
	int weight;

	void Eat();
	void Walk();
	void Run();
	void Think();
};

