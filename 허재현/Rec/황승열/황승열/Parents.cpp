#include "stdafx.h"


C_PARENTS::C_PARENTS():m_nData(0)
{

}

void C_PARENTS::setData(int nData)
{
	m_nData = nData;
}

int C_PARENTS::getData()
{
	return m_nData;
}

 C_CHILD::C_CHILD()
 {

 }

 int C_CHILD::getDouble()
 {
	 return C_PARENTS::getData()*2;
 }