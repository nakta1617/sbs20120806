// first.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Mintuck.h"
// ���α׷��� ������ main���κ��� �����Ѵ�.

int _tmain(int argc, _TCHAR* argv[])
{
	//f9�� �극��ũ ����Ʈ�� ��´�
	// f5�� ����� ���� ����
	//f10���� ���� ������ �� �� �ִ�
	//f11�� ����
	Mintuck No1;
	No1.age = 10;
	No1.height = 190;
	No1.weight = 30;
	No1.name = "No1";

	Mintuck No2;
	Mintuck No3;
	Mintuck No4;
	
	No1.Eat();
	No2.Eat();
	No3.Eat();
	No4.Eat();
	
	No1.Run();
	No2.Run();
	No3.Run();
	No4.Run();

	No1.Think();
	No2.Think();
	No3.Think();
	No4.Think();

	No1.Walk();
	No2.Walk();
	No3.Walk();
	No4.Walk();
	return 0;
}

