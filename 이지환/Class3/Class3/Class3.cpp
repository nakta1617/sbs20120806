// Class3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <Windows.h>
#include "MyRectangle.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//ȭ��ٱ����� ���ʰ��� �����ó�� ���ۺ���
	//���Ƽ� ���´�
	// 1. �׸�ĭ�� �ֱ������� ���ݾ�
	//    ȭ�鿡 �׸��� �׸���
	// 2. ���ηδ� ���׶��, ���ηδ�
	//    X�� �׸���
	// 3. ����ؼ� �׸�ĭ�� �׸���.
	MyRectangle rectangle1;
	rectangle1.m_x = 10;
	rectangle1.m_y = 10;
	rectangle1.m_width = 3;
	rectangle1.m_height = 3;

	MyRectangle rectangle2;
	rectangle2.m_x = 15;
	rectangle2.m_y = 5;
	rectangle2.m_width = 5;
	rectangle2.m_height = 4;

	while (true)
	{
		rectangle1.Draw();
		//rectangle2.Draw();
	}

	
	






	return 0;
}//�ݺ��� ����Ͽ� �ִϸ��̼� ������

