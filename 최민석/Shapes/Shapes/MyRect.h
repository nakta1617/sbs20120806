#pragma once

class MyRect
{
public:
	MyRect(void);
	~MyRect(void);

	void MoveLeft(int x);
	void MoveRight(int x);
	void MoveUp(int y);
	void MoveDown(int y);
	void Move1();
	void Move2();
	void Move3();
	void Move4();

	void Draw() const;

	int m_x;
	int m_y;
	int m_width;
	int m_height;
};