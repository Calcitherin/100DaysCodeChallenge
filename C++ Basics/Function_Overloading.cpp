#include <iostream>
using namespace std;

void printNumber(int a);
void printNumber(float b);

int main()
{
	int PlayerHealth = 45;
	float PlayerStrenght = 32.69;

	printNumber(PlayerHealth);
	printNumber(PlayerStrenght);
	return 0;
}

void printNumber(int a)
{
	cout<<"Integer Health : "<<a<<endl;
}

void printNumber(float b)
{
	cout<<"Float Strenght : "<<b<<endl;
}

/* Function Overloading : Function that has the same name, and or may perform the same actions
(Identical Funtions).But has different types of parameters/arguments. This way you can have same 
function with different types of parameters to work with. */