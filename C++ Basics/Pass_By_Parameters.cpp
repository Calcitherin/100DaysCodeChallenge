#include <iostream>
using namespace std;

void printByValue(int x);
void printByReference(int & x);
void printByPointer(int * x);

int main()
{
	int Elio = 77;

	printByValue(Elio);
	printByReference(Elio);
	printByPointer(&Elio); //Here the '&' is 'address-of' operator

	return 0;
}

void printByValue(int x)
{
	cout<<x<<endl; //Display value of x
}

void printByReference(int & x) //Here the '&' is Reference operator
{
	cout<<x<<endl; //Display the value of whose alias x is
}

void printByPointer(int * x)
{
	cout<< *x <<endl; //Display value x is pointing to
	cout<< x <<endl; //Display the address of variable the pointer x is pointing to
}


/*

Pass by Value : giving copy of variable value

Pass by Reference : making an alias of the variable

Pass by Pointer : giving the address of the variable

*/