// ������.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

void PrintPerAge(int age)
{
	
	if(age <=10)
	{
		printf("%d���̹Ƿ� �����Դϴ�.\n",age);
		return;
	}
		if(age <=20)
	{
		printf("%d���̹Ƿ� û�ҳ��Դϴ�.\n",age);
		return;
	}
		if(age <=30)
	{
		printf("%d���̹Ƿ� �������Դϴ�.\n",age);
		return;
	}
	if(age <=40)
	{
		printf("%d���̹Ƿ� �߳��Դϴ� .\n",age);
		return;
	}	
	printf("%d���̹Ƿ� ����Դϴ�.\n",age);
}


int _tmain(int argc, _TCHAR* argv[])
{

	int input = 0;
	printf("���̸� �Է��ϼ��� ->");
	scanf("%d",&input);

	//!

	//++

	//&&,||

	//~, &, |

	


	PrintPerAge(input);




	return 0;
}

