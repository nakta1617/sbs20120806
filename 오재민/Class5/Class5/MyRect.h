#pragma once
class MyRect
{
public:
	MyRect(void);
	~MyRect(void);
	

	void Move();
	void Draw();
	void MoveLeft(int x);	
	void MoveRight(int x);
	void MoveUp(int x);
	void MoveDown(int x);
//	void MoveLeftDiagonal();
//	void MoveRightDiagonal();

	int m_x;
	int m_y;
	int m_width;
	int m_height;

};

