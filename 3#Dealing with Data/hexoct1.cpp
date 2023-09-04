

#include <iostream>

int main()
{

	using namespace std;

	int cheat = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "cheat = " << cheat << " in dec" << endl;
	cout << "waist = " << waist << " in dec" << endl;
	cout << "inseam = " << inseam << " in dec" << endl;
	
	cout << hex;
	cout << "cheat = " << cheat << " in hex" << endl;
	cout << "waist = " << waist << " in hex" << endl;
	cout << "inseam = " << inseam << " in hex" << endl;

	cout << oct;
	cout << "cheat = " << cheat << " in oct" << endl;
	cout << "waist = " << waist << " in oct" << endl;
	cout << "inseam = " << inseam << " in oct" << endl;


	return 0;
}



