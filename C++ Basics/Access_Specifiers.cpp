#include <iostream>
using namespace std;

class Player
{
	private:
		string name;

	public:
		void setName(string a)
		{
			name = a;
		}

		void displayName()
		{
			cout<<"\nHi "<<name<<endl;
		}
};

int main()
{
	string name;
	cout<<"Set Character name : ";
	cin>>name;
	Player player;
	player.setName(name);
	player.displayName();
	return 0;
}