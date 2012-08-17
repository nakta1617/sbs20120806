#pragma once

#include "Head.h"
#include "Chest.h"
#include "Stomach.h"
#include "Arm.h"
#include "Leg.h"

#include <string>
using namespace std;


class human
{
public:
	human(void);
	~human(void);

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

