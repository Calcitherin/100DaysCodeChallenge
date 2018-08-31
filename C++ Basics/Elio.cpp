#include <iostream>
#include "Elio.h"
using namespace std;

Elio :: Elio()
{
	
}

void Elio :: displayText()
{
	cout<<"Regular Function"<<endl;
}

void Elio :: displayLine() const
{
	cout<<"Constant Function"<<endl;
}