

#include <iostream>

double stonetolb(double);

int main()
{
	using namespace std;
	double stone, pound;
	
	cout << "Enter the weight in stone:";
	cin >> stone;

	pound = stonetolb(stone);

	cout << stone << " stones = " 
		 << pound << " pounds" 
		 << endl;	

	return 0;

}

double stonetolb(double sts)
{
	return 14 * sts;
}




