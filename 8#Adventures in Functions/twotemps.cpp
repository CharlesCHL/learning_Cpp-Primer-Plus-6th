

#include <iostream>

using namespace std;

const int Lim = 8;

template <typename T>
void Swap(T&, T&);

template <typename T>
void Swap(T*, T*, int);

void show(int*, int);


int main(void)
{
	int i = 10;
	int j = 20;	
	cout << "i = " << j << ", j = " << j << "." << endl;
	Swap(i, j);
	cout << "After Swap, now i = " << j << ", j = " << j << "." <<endl;

	int d1[Lim] = {0, 7, 0, 4, 1, 7, 7, 6};
	int d2[Lim] = {0, 7, 2, 0, 1, 9, 6, 9};

	cout << "Origianl arrays: " << endl;
	show(d1, Lim);
	show(d2, Lim);
	Swap(d1, d2, Lim);
	cout << "Swapped arrays: " << endl;
	show(d1, Lim);
	show(d2, Lim);

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

template <typename T>
void Swap(T* a, T* b, int n)
{
	T temp;
	for(int i = 0; i < n; i++)
	{
		temp = *(a + i);	
		*(a + i) = *(b + i);
		*(b + i) = temp;
	}
}


void show(int* arr, int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}





