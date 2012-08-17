#pragma once

#include "c_dorosy.h"
#include "c_lila.h"
#include "c_anje.h"

#include <string>
using namespace std;


class character
{
public:
	character(void);
	~character(void);

	c_dorosy c_dorosy ;
	c_lila  c_lila;
	c_anje  c_anje;

	int speed ;
	int power ;
	int defence ;
	string name;

	void Run() ;
	void jump() ;
	void shoot() ;
	void dead();

};

