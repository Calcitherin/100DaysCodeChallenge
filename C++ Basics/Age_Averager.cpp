#include <iostream>
using namespace std;

int main()
{
	int age;
	int averageAge;
	int totalAge = 0;
	int totalPeople = 0;

	cout<<"Enter age of person or -1 to quit"<<endl;
	cin>>age;

	while(age != -1)
	{
		totalPeople++;
		totalAge += age;
		cin>>age;
	}

	averageAge = totalAge/totalPeople;
	cout<<"Average Age is : "<<averageAge<<endl;
	return 0;
}