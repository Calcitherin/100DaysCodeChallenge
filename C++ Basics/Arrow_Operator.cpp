#include <iostream>
#include "Selection.h"
using namespace std;

int main()
{
	Selection obj;
	Selection * ptr = &obj;

	obj.displayText();  //To access object directly from class DOT operator is used.
	ptr->displayText(); //To access object via a pointer from a class ARROW operator is used.

	return 0;
}