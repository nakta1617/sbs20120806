#pragma once

class MyRect
{
public:
	MyRect(void);
	~MyRect(void);

	//void Bullet();
	void MoveLeft(int i);
	void MoveRight(int i);
	void MoveUp(int i);
	void MoveDown(int i);

	void Draw();

	int m_x;
	int m_y;
	int m_width;
	int m_height;
};