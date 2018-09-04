#include <iostream>
#include "Father.h"
using namespace std;

Father :: Father()
{
	cout<<"I am the constructor in Father Class."<<endl;
} 

Father :: ~Father()
{
	cout<<"I am the deconstructor in Father Class."<<endl;
}

//Derived Class