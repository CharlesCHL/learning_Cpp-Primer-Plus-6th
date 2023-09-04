

#include <iostream>

using namespace std;

template <typename T>
void Swap(T&, T&);

int main(void)
{
	int i = 10;
	int j = 20;	
	cout << "i = " << j << ", j = " << j << "." << endl;
	Swap(i, j);
	cout << "After Swap, now i = " << j << ", j = " << j << "." <<endl;

	double x = 24.5;
	double y = 81.7;
	cout << "x = " << x << ", y = " << y << "." << endl;
	Swap(x, y);
	cout << "After Swap, now x = " << x << ", y = " << y << "." <<endl;


	return 0;

}


template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}


