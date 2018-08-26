//Compound Interest Formula
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float amount;
	float p = 10000; //Principal
	float rate = 0.1;
	int days = 20;

	for(int i=0; i<days; i++)
	{
		amount = p * pow(1 + rate,i+1);
		cout<<"Amount Day "<<i<<" is : "<<amount<<endl;
	}
	return 0;
}