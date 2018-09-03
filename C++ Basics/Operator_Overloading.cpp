#include <iostream>
#include "Overload.h"
using namespace std;

int main()
{
	Overload a(22);
	Overload b(33);
	Overload c;

	c = a + b;
	
	cout<< c.num <<endl;

	return 0;
}

/* Operator Overloading is used when you want to costumize operators(+,-,*,...) for 
 specific needs(other than what they generally perform) .
 */
