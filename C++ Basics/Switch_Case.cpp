#include <iostream>
using namespace std;

int main()
{
	int name;
	cout <<"Which character would you be : James(1) , Oliver(2) or Elio(3) ? \n";
	cout <<"Enter number to select your choice : ";
	cin>>name;


	//Cannot enter string type variable in switch parameters in C and C++
	switch(name){
		case 1 : 
			cout<<"Good choice! James is the protector the world needs.\n";
			break;

		case 2 :
			cout<<"Oh, the magician . Welcome Oliver.\n";
			break;

		case 3 :
			cout<<"Adventure is your best friend. Run free Elio ..run.\n";
			break;

		default :
			cout<<"\nWell, to enter the world you have to choose a personality!\n";
			break;
		}

	return 0;	
}