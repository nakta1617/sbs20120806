#pragma once
class MyRect
{
public:
	MyRect(void);
	~MyRect(void);

	void Draw();

	int m_x;
	int m_y;
	int m_width;
	int m_height;

	void MoveUp();

	void MoveDown();

	void MoveLeft();

	void MoveRight();


};
