#pragma once

#include "Attack.h"
#include "Defence.h"
#include "Move.h"

#include <string>
using namespace std;

class Airplane
{
public:
	Airplane(void);
	~Airplane(void);
	
	Attack attack;
	Defence defence;
	Move move;

	int bullet;
	int size;
	string name;

	void cAllInformation();
};

