#include <iostream>
using namespace std;

int Factorial(int x);

int main()
{
	cout<<Factorial(5)<<endl;
	return 0;
}

int Factorial(int x)
{
	if(x > 1)
	{
		return x * Factorial(x-1);
	}
	else
		return 1;
}