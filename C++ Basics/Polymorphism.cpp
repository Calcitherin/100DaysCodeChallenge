#include <iostream>
using namespace std;

class Enemy
{
	protected:
		int attackPower;

	public:
		void setAttack(int a)
		{
			attackPower = a;
		}

};

class Ninja : public Enemy
{
	public:
		void attack()
		{
			cout << "Ninjaaa Punch! "<<attackPower<<endl;
		}
};

class Monster : public Enemy
{
	public:
		void attack()
		{
			cout << "Monster : I am going to eat you! "<<attackPower<<endl;
		}
};

int main()
{
	Ninja n;
	Monster m;

	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;

	enemy1->setAttack(30);
	enemy2->setAttack(12);

	n.attack();
	m.attack();

	return 0;
}


/*

Using a member of Base class in derived classes for different outcomes .

a person at a same time can have different characteristic. Like a man at 
a same time is a father, a husband, a employee. So a same person posses 
have different behavior in different situations. This is called polymorphism.

*/


