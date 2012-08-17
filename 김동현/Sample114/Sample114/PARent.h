#pragma once
#ifndef __PAR_H_
#define __PAR_H_

class C_PARENT
{
private:
	int m_nData;
public:
	C_PARENT();
	void setData(int nData);
	int getData();
};

class C_CHILD : public C_PARENT
{
public:
	int getDouble();
};

#endif //__PAR_H_