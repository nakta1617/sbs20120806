#pragma once

#include <string>
using namespace std;
class player
{
public:
	player(void);
	~player(void);

	string name;
	string nation;
	string foot;
	int age;
	int height;
	int weight;
	int offensive;
	int depensive;
	int goalkeeping;
	
	void Shoot();
	void Handle();
	void Run();
	void Dribble();
	void ShortPass();
	void LongPass();
	void Depense();
};

