// test070.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

class C_PARENT
{
public:
	C_PARENT()
	{
       printf("�θ�Ŭ���� ������ ȣ�� \n");
	}
	~C_PARENT()
	{
       printf("�θ�Ŭ���� �Ҹ��� ȣ�� \n");
	}
};
class C_CHILD : public C_PARENT
{
public:
	C_CHILD()
	{
		printf("�ڽ�Ŭ���� ���� \n");
	}
	~C_CHILD()
	{
        printf("�ڽ�Ŭ���� �Ҹ� \n");
	}
};




int _tmain(int argc, _TCHAR* argv[])
{
	C_CHILD C_CHILD;		
	return 0;
}

