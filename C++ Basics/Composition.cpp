#include <iostream>
#include "Character.h"
#include "Strength.h"
using namespace std;

int main()
{
	Strength strengthObj(4,"Spells");
	Character charObj("Elio",strengthObj);
	charObj.displayInfo();

	return 0;
}