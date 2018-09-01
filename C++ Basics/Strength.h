#ifndef STRENGTH_H
#define STRENGTH_H

#include <string>
using namespace std;

class Strength
{
	public:
		Strength(int l, string t);
		void displayStrength();

	private:
		int level;
		string type;
};

#endif