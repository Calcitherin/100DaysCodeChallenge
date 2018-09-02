#include <iostream>
using namespace std;

class Weapon
{
	public:
		Weapon(){var = 0;}

	private:
		int var;

	friend void strength(Weapon &wo);

};

void strength(Weapon &wo)
{
	wo.var = 99;
	cout<<wo.var<<endl;
}

int main()
{
	Weapon w1;
	strength(w1);
	return 0;
}

/* A friend function is one that which is defined outside the scope of a class , 
 but the friend function can access class members by the class accepting the friendship.
 The class accepts the friendship if you prototype the function within the class with 
 keyword 'friend' */