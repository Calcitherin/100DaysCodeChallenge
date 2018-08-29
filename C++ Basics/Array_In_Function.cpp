#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray); //Prototype Declaration

int main()
{
	int Items[3] = {3,5,7};
	int Spells[7] = {43,55,422,565,99,1,76};
	printArray(Items,3);
	printArray(Spells,7);
	return 0;
}

void printArray(int theArray[], int sizeOfArray)
{
	for (int i = 0; i < sizeOfArray; ++i)
	{
		cout<<i<<" --- "<<theArray[i]<<endl;
	}

}