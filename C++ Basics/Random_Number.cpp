#include <iostream>
using namespace std;

int main()
{
	srand(time(0));

	for(int i=0; i<20;i++)
	{
		cout<<10+(rand()%6)<<endl;
	}
	
	return 0;
}

/*Random number generator function, rand(), is actually not random . It is just a complex alogrithm which due to
its complexity appears to be random. It is rather following a specific procedure. This is not good for actually
producing random numbers. 

Therefore, seed random function, srand(time(0)), is used as parameter of time . As time is the only thing constantly
changing . This will make the srand() function generate different procedure to follow for the rand() to generate 
numbers. */
