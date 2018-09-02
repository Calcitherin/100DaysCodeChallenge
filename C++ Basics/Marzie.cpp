#include <iostream>
#include "Marzie.h"
using namespace std;

Marzie :: Marzie(int v) : var(v)
{
	
}

void Marzie :: displayInfo()
{
	cout<< "var is " << var <<endl;
	cout<< "this->var is " << this->var<<endl;
	cout<< "(*this).var is " << (*this).var<<endl;
}