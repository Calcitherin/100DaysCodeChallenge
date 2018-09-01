#include <iostream>
#include "Character.h"
#include "Strength.h"
using namespace std;

Character :: Character(string n, Strength s) : name(n), strengthObject(s)
{
	
}

void Character :: displayInfo()
{
	cout<<"Character : "<<name<<" has ";
	strengthObject.displayStrength();
}