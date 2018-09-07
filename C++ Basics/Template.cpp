#include <iostream>
using namespace std;

template <class Elio> //Elio is the generic data type

Elio addCrap(Elio a, Elio b)
{
	return a+b;
}

int main()
{
	cout<<addCrap(32.7,42.3)<<endl;
	cout<<addCrap(33,22)<<endl;

	return 0;
}


/* When you want to use generic data type, i.e. is you 
want to use multiple data type for the same function, 
we use Template */