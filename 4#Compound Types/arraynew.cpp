

#include <iostream>

using namespace std;

int main()
{

	double* p3 = new double [3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] = " << p3[1] << endl;
	cout << "*(p3 + 1) = " << *(p3 + 1) << endl;

	return 0;

}




