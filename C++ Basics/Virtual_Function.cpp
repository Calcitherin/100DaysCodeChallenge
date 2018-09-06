#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Enemy
{
	public:
		virtual void attack(){}
};

class Ninja : public Enemy
{
	public:
		void attack()
		{
			cout << "Ninjaaa Punch! "<<endl;
		}
};

class Monster : public Enemy
{
	public:
		void attack()
		{
			cout << "Monster : I am going to eat you! "<<endl;
		}
};

int main()
{
	Ninja n;
	Monster m;

	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;

	enemy1->attack();
	enemy2->attack();

	return 0;
}

/* Virtual Function is used when you redefine a function in derived classes. */

