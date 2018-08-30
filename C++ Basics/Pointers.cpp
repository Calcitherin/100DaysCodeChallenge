#include <iostream>
using namespace std;

int main()
{
	int health = 3;
	cout<< &health <<endl; //Prints memory address of health variable.

	int *address; //Pointer
	address = &health;
	cout<<address<<endl;

	int Items[3] = {2,4,6};
	int *ptr0 = &Items[0];
	cout<< *ptr0 <<endl; //Points to the first element of array
	ptr0++;
	cout<< *ptr0 <<endl; //Points to second element of array 

	return 0;
}

/*
Pointer is a special type of variable that is used to hold/store memory address as value.
'&' is memory address operator 
*/