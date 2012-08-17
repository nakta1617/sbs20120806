// test01.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

class C_Div
{
private:
	int m_nDest;
	int m_nSrc;
public:
	C_Div() : m_nDest(0), m_nSrc(0)
	{
	}
	void setdata(int nDest, int nSrc)
	{
		m_nDest = nDest;
        m_nSrc = nSrc;
	}
	float getdivdata()
	{
		return (float)m_nDest/(float)m_nSrc;	
	}
	int getShare()
	{
		return m_nDest/m_nSrc; 		
	};
	int getRemainder()
	{
		return m_nDest%m_nSrc;
	};
	void getShareAndRemainder(int *pShare , int*pRemainder )
	{
		*pShare = m_nDest/m_nSrc; 
		*pRemainder = m_nDest%m_nSrc;
	}

};


int _tmain(int argc, _TCHAR* argv[])
{
	C_Div cDiv;
	cDiv.setdata(20,7);
	printf("%f \n", cDiv.getdivdata());
	printf("%d \n", cDiv.getShare());
	printf("%d \n", cDiv.getRemainder());
	
	printf ("몫 : %d , 나머지 : %d \n", );
	return 0;
}

