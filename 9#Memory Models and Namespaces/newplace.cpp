

#include <iostream>
#include <new>

using namespace std;

const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main(void)
{
	double *pd1, *pd2;
	int i;

	cout << "Calling new and placement new: \n";
	pd1 = new double[N];
	pd2 = new(buffer) double[N];

	for(i = 0; i < N; i++)
		pd1[i] = pd2[i] = 1000 + 20.0 * i;
	
	cout << "pd1 = " << pd1 << ", buffer = " << (void*)buffer << endl;

	for(i = 0; i < N; i++)
	{
		cout << pd1[i] << " at " << pd1 + i << " ; ";
		cout << pd2[i] << " at " << pd2 + i << endl;
	}
		
	cout << "\nCalling new and placement new at second time: \n";
	double *pd3, *pd4;
	pd3 = new double[N];
	pd4 = new(buffer) double[N];

	for(i = 0; i < N;i++)
		pd3[i] = pd4[i] = 1000 + 40.0 * i;
	
	for(i = 0; i < N; i++)
	{
		cout << pd3[i] << " at " << pd3 + i << " ; ";
		cout << pd4[i] << " at " << pd4 + i << endl;
	}

	cout << "\nCalling new and placement new at third time: \n";
	
	delete[] pd1;

	pd1 = new double[N];
	pd2 = new(buffer + 5 * (sizeof(double))) double[N];

	for(i = 0; i < N; i++)
		pd1[i] = pd2[i] = 1000 + 20.0 * i;
	
	for(i = 0; i < N; i++)
	{
		cout << pd1[i] << " at " << pd1 + i << " ; ";
		cout << pd2[i] << " at " << pd2 + i << endl;
	}

	delete[] pd1;
	delete[] pd3;

	return 0;

}




