#include <iostream>
#include "Oliver.h"
using namespace std;

Oliver :: Oliver(int a, int b) : regularVariable(a), constantVariable(b)
{
	 
}

void Oliver :: display()
{
	cout<<"Regular Variable : "<<regularVariable<<endl;
	cout<<"Constant Variable : "<<constantVariable<<endl;
}