#pragma once

#include"Head.h"
#include"Chest.h"
#include"Stomach.h"
#include"Arm.h"
#include"Leg.h"


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
	Arm leftarm;
	Arm rightarm;
	Leg leftleg;
	Leg rightleg;

	void Eat();
	void Walk();
	void Run();
	void Think();

	string name;
	int age;
	int height;
	int weight;

};

