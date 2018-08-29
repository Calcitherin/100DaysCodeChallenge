#include <iostream>
using namespace std;

int main()
{
	int Items[9];
	cout<<"Element - Value"<<endl;

	for (int i = 0; i < 9; ++i)
	{
		Items[i] = i+99;
		cout<<i<<" - "<<Items[i]<<endl; 
	}
	return 0;
}