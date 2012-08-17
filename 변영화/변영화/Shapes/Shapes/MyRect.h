#pragma once
class MyRect
{
public:
	MyRect(void);
	~MyRect(void);

	void Draw();
	void MoveLeft(int Move);
	void MoveRight(int Move);
	void MoveUp(int Move);
	void MoveDown(int Move);

	int m_x;
	int m_y;
	int m_width;
	int m_height;
};

