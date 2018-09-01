#ifndef CHARACTER_H
#define CHARACTER_H

#include "Strength.h"
#include <string>
using namespace std;

class Character
{
	public:
		Character(string n, Strength s);
		void displayInfo();

	private:
		string name;
		Strength strengthObject;
};

#endif