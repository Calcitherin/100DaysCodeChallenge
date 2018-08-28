#include <iostream>
using namespace std;

int PlayerHealth = 35; //Global Variable: can be used in any function

int main()
{
	double PlayerHealth = 77; //Local Variable: can be used only in main function

	cout<<PlayerHealth<<endl; //Displays Local Variable

	cout<<::PlayerHealth<<endl; //Displays Global Variable

	return 0;
}

/* When you have variables with same name in Local and Global Space and want to use the Global one, the
Unary Scope Operator, :: , is used. */