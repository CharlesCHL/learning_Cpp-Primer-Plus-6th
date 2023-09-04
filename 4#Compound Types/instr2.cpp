
#include <iostream>
#include <cstring>


int main()
{
	using namespace std;
	
	const int ArSize = 20;
	
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name: " 
		 << endl;
	cin.getline(name, 20);
	/**缓冲区*/
	cout << "Enter your favourite dessert: "
		 << endl;
	cin.getline(dessert, 20);
	
	cout << "I have some delicious " << dessert << " for you, " << name << ". " 
		 << endl;
	

	return 0;

}





