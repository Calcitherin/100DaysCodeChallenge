#include <iostream>
#include "Father.h"
#include "Son.h"
using namespace std;

Son :: Son()
{
	cout<<"I am the constructor in Son Class."<<endl;
} 

Son :: ~Son()
{
	cout<<"I am the decontructor in Son Class."<<endl;
} 

//Derived Class