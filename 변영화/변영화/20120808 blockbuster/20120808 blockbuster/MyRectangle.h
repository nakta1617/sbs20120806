#pragma once
class MyRectangle
{
public:
	MyRectangle(void);
	~MyRectangle(void);

	void Draw();
	void printxy(int, int, char);
	int m_x;
	int m_y;
	int m_width;
	int m_height;
};

