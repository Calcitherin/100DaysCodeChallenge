#include <iostream>
#include "Overload.h"
using namespace std;

Overload :: Overload()
{
	
}

Overload :: Overload(int a) : num(a)
{

}

Overload Overload :: operator+(Overload anotherObj)
{
	Overload brandnewObj;
	brandnewObj.num = num + anotherObj.num;
	return(brandnewObj);
}