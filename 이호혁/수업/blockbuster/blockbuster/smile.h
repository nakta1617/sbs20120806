#pragma once
#include <windows.h>

void printxy(int x, int y, char ch)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", ch);
}
class smile
{
public:
	smile(void);
	~smile(void);

	printxy(31, 6, ' ');
	printxy(32, 6, ' ');
	printxy(30, 5, ' ');
	printxy(29, 5, ' ');
	printxy(28, 5, ' ');
	printxy(27, 5, ' ');
	printxy(26, 5, ' ');
	printxy(25, 6, ' ');
	printxy(24, 6, ' ');
};

