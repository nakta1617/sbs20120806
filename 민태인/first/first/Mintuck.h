#pragma once
class Mintuck
{
public:
	Mintuck(void);
	~Mintuck(void);

	//	#include - �ٸ� Ŭ������ ����Ҽ� �ֵ��� �����ش�
	// ; - ������ ���� ������ �������� ; �� �ٿ� ������ ���Ḧ �˸���
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
	// �ൿ�� �����ϴ� ������
	// _ void �ൿ�̸�();
	// -�ൿ ������
	//  void Ŭ�����̸� ::�ൿ�̸�()
	// {
	//	����
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

