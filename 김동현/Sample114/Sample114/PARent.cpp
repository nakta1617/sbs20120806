#include "stdafx.h"


C_PARENT::C_PARENT() : m_nData(0)
{
}
void C_PARENT::setData(int nData)
{
	m_nData = nData;
}
int C_PARENT::getData()
{
	return m_nData;
}

int C_CHILD::getDouble()
{
	return C_PARENT::getData() * 2;
}