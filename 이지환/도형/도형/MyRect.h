#pragma once
class MyRect
{
public:
	MyRect(void);
	~MyRect(void);

	void Draw();
	void MoveLeft();
	void MoveRight();
	void MoveUp();
	void MoveDown();

	int m_x;
	int m_y;
	int m_width;
	int m_height;

};

