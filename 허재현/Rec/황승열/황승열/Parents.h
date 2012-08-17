#pragma  once

class C_PARENTS
{

private:
	int m_nData;
public:
	C_PARENTS();
	void setData(int nData);
	int getData();

};

class C_CHILD : public C_PARENTS
{
public:
	C_CHILD();
	int getDouble();

};