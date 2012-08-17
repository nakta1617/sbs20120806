#pragma once
class MyTriangle
{
public:
	MyTriangle(void);
	~MyTriangle(void);

	void MoveLeft(int Leftpoint);
	void MoveRight(int Rightpoint);
	void MoveUp(int Uppoint);
	void MoveDown(int Downpoint);
	void Draw();

	int m_x;
	int m_y;
	int m_width;
	int m_height;


};

