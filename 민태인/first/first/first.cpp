// first.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Mintuck.h"
// 프로그램의 시작은 main으로부터 시작한다.

int _tmain(int argc, _TCHAR* argv[])
{
	//f9로 브레이크 포인트를 잡는다
	// f5로 디버깅 모드로 시작
	//f10으로 한줄 실행을 할 수 있다
	//f11로 내부
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

