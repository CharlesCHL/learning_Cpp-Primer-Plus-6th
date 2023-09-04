

#include <iostream>

#define NAMESIZE	5

using namespace std;

const int Lim = 8;

struct job_st
{
	char name[NAMESIZE];	
	double salary;
	int floor;
};

template <typename T>
void Swap(T&, T&);

template <> void Swap<job_st>(job_st& j1, job_st& j2);


template <typename T>
void Swap(T*, T*, int);

void show(int*, int);

void show(const job_st);

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

	job_st jack = {"Jack", 1000, 10};
	job_st rick = {"Rick", 1100, 11};
	Swap(jack, rick);
	show(jack);
	show(rick);

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

template <> void Swap<job_st>(job_st& j1, job_st& j2)
{
	double t1;
	int t2;
	
 	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
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

void show(const job_st j)
{
	
	cout << j.name << ":" << j.salary << ", " << j.floor << endl;
}



