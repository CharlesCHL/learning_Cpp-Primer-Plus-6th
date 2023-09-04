

#include <iostream>

using namespace std;

int main(void)
{
	int rats = 101;
	int &rodents = rats;

	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;

	cout << "&rats = " << &rats << endl;
	cout << "&rodents = " << &rodents << endl;
	
	int bunnies = 50;
	rodents = bunnies;

	cout << "bunnies = " << bunnies << endl;
	cout << "rodents = " << rodents << endl;
	cout << "rats = " << rats << endl;

	cout << "&rats = " << &rats << endl;
	cout << "&rodents = " << &rodents << endl;
	cout << "&bunnies = " << &bunnies << endl;

	return 0;

}






