#include <iostream>
#include "Selection.h"
using namespace std;

Selection :: Selection()
{
	cout<<"This is a constructor .\n"<<endl;
}

Selection :: ~Selection()
{
	cout<<"This is the distructor. "<<endl;
}

void Selection :: displayText()
{
	cout<<"Hi, there Ranger!"<<endl;
}