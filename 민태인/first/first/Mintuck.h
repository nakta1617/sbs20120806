#pragma once
class Mintuck
{
public:
	Mintuck(void);
	~Mintuck(void);

	//	#include - 다른 클래스를 사용할수 있도록 도와준다
	// ; - 문장의 줄이 끝나는 시점에서 ; 을 붙여 문장의 종료를 알린다
#include "Head.h"
#include "Chest.h"
#include "Stomach.h"
#include "Arm.h"
#include "Leg.h"
#include <string>
	using namespace std;

    Head Head;
	Chest Chest;
	Stomach Stomach;
	Arm leftArm;
	Arm rightArm;
	Leg leftLeg;
	Leg rightLeg ;
	// 행동을 정의하는 문법은
	// _ void 행동이름();
	// -행동 구현은
	//  void 클래스이름 ::행동이름()
	// {
	//	구현
	// }

	int age;
	int height;
	int weight;
	string name;

	void Eat();
	void Walk();
	void Run();
	void Think();
};

