#include <iostream>
using namespace std;

int characterYear;
int ageCalulator(int a);

int main()
{
	cout<<"Hi, I'll calculate age for any character in a game.\n";
	cout<<"Just enter the year they were born in : ";
	cin>>characterYear;
	int answer = ageCalulator(characterYear);

	if(answer == 1)
	{
		cout<<"\nAge is : "<<answer<<" year old."<<endl;
	}
	else
		cout<<"\nAge is : "<<answer<<" years old."<<endl;
	return 0 ;
}

int ageCalulator(int a)
{
	int year = a;
	int age = 2018 - year;
	return age;
}