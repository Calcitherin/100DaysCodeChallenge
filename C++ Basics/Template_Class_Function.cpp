#include <iostream>
using namespace std;

template <class E, class F> 
E smaller(E a, F b)
{
	return (a<b?a:b);
}

template <class T>
class Elio
{
	T first, second;

	public:
		Elio(T a, T b)
		{
			first = a;
			second = b;
		}

		T bigger();
};

template <class T>
T Elio <T> :: bigger()
{
	return (first > second ? first : second);
}

int main()
{
	Elio <int> e(15,21);

	cout<<e.bigger()<<endl;
	
	return 0;
}

