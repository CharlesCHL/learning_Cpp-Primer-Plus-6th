

#include <iostream>


int main()
{
	using namespace std;
	
	int year;
	char address[80];

	cout << "What year was your house built?" << endl;
	cin >> year;
	cin.get();
	cout << "What is its street address?" << endl;
	cin.getline(address, 80);

	cout << "Your built: " << year << endl
		 << "Address: " << address << endl;	
	


	return 0;

}




