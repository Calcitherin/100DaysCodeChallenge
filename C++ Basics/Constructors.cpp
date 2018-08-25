#include <iostream>
using namespace std;

class Player
{
	public:
		Player(string x)
		{
			setName(x);
		}

		void setName(string a)
		{
			name = a;
		}

		void displayName()
		{
			cout<<name<<endl;
		}

	private:
		string name;

};

int main()
{
	cout<<"Hi there, ready to go for an adventure:\n";
	Player player("Elio");
	player.displayName();

	return 0;
}