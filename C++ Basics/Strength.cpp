#include <iostream>
#include "Strength.h"
using namespace std;

Strength :: Strength(int l, string t) : level(l), type(t)
{
	
}

void Strength :: displayStrength()
{
	cout<<"Strength level : "<<level<<" and Strength type : "<<type<<endl;
}