#pragma once
class Myrect
{
public:
	Myrect(void);
	~Myrect(void);

	void Draw();

	int m_x;
	int m_y;
	int m_height;
	int m_width;

	void MoveDown(int m_z);
	void MoveLeft(int m_z);
	void MoveRight(int m_z);
	void MoveUp(int m_z);

};

