#include <iostream>
using namespace std;

class PlayerInfo
{
	public :
		void playerName()
		{
			cout<<"Player name : Elio\n";
		}
};

int main()
{
	PlayerInfo playerObject;
	playerObject.playerName();
	return 0;
}

