// test070.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

class C_PARENT
{
public:
	C_PARENT()
	{
       printf("부모클래스 생성자 호출 \n");
	}
	~C_PARENT()
	{
       printf("부모클래스 소멸자 호출 \n");
	}
};
class C_CHILD : public C_PARENT
{
public:
	C_CHILD()
	{
		printf("자식클래스 생성 \n");
	}
	~C_CHILD()
	{
        printf("자식클래스 소멸 \n");
	}
};




int _tmain(int argc, _TCHAR* argv[])
{
	C_CHILD C_CHILD;		
	return 0;
}

