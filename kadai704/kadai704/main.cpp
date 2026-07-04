#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>


class Param
{
	int Playerhp;
	int Goblinhp;
	int Slimehp;
	int Playerattack;
	int GoblinAttack;
	
};

class Player
{
public:
	Player() 
	{
		int Rand();
	}
public:
	std::string    name_ = {};
	int            footNum_ = 0;
	
;

};

class Goblin
{
public:
	Goblin() {

	}
	std::string     name_ = {};
	int             footNum_ = 0;
	
};

class Slime
{
public:
	Slime() {

	}
	std::string     name_ = {};
	int             footNum_ = 0;
};

int Attack()
{
	int Playerattack;
	int Goblinattack;
	int Slimeattack;
	srand((unsigned int)time(NULL));
	Playerattack = rand() % 20;
	Goblinattack= rand() % 10;
	Slimeattack= rand() % 10;

	return Playerattack, Goblinattack,Slimeattack;
} 



int HP()
{
	
	int Playerhp = 0;
	int Goblinhp = 0;
	int Slimehp = 0;

	srand((unsigned int)time(NULL));
	Playerhp = rand()% 51 + 50;
	Goblinhp = rand()% 51 + 50;
	Slimehp = rand()% 51 + 50;

	return Playerhp, Goblinhp, Slimehp;

}
int main()
{
	int Playerhp = 0;
	int Goblinhp = 0;
	int Slimehp = 0;
	int Playerattack = 0;
	int Enemyattack = 0;

	Player* player = new Player;

	Slime* slime = new Slime;

	Goblin* goblin = new Goblin;

	Playerhp,Goblinhp,Slimehp = HP();
	std::cout <<"Player‚ÌHP‚Í" << Playerhp <<  std::endl;
	std::cout << "Slime‚ÌHP‚Í" << Slimehp << std::endl;
	std::cout << "Goblin‚ÌHP‚Í" << Goblinhp << std::endl;
	
	while (true) {

		int Attack();
	}

}