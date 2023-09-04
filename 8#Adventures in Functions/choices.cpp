

#include <iostream>

using namespace std;

template <typename T>
T lesser(T a, T b)
{
	return a > b ? b : a;
}

int lesser(int a, int b)
{
	return a * a > b * b ? b : a;
}

int main(void)
{
	int m = 20;
	int n = -30;

	double x = 15.5;
	double y = 25.9;

	cout << lesser(m, n) << endl;
	cout << lesser(x, y) << endl;

	cout << lesser<>(m, n) << endl;
	cout << lesser<int>(x, y) << endl;

	return 0;
}




