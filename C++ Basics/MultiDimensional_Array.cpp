#include <iostream>
using namespace std;

int main()
{
	int Weapons[2][3] = {{44,11,55},{10,20,30}};

    //To print Individual Elements
	cout<<Weapons[0][1]<<endl; 

	//To print Table Format with all Elements
	for (int row = 0; row < 2; ++row)
	{
		for (int  column = 0; column < 3; ++column)
		{
			cout<<Weapons[row][column]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}

/*
Two rows and Three Columns
	 44 11 55
	 10 20 30
No. of Rows : How many arrays , No. of Columns : How many values

Just like co-ordinate system.
 */