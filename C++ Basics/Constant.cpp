#include <iostream>
#include "Elio.h"
using namespace std;

int main()
{
	Elio obj_1;
	const Elio obj_2; //Constant object

	obj_1.displayText();
	obj_2.displayLine();

	return 0;
}

/* Constant members can only be used with other constant members.
A constant object of class will use only a constant function .
A constant member cannot be changed , hence the name.
*/