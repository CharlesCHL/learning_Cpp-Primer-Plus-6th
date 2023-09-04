

#include <iostream>

using namespace std;

const int ArSize = 10;


void strcount(const char*);

int main(void)
{
	char input[ArSize];
	char next;

	cout << "Enter a line:\n";
	cin.get(input, ArSize);
	while(cin)
	{
		cin.get(next);
		while(next != '\n')
			cin.get(next);
		strcount(input);
		cout << "Enter next line (empty line to quit): \n";
		cin.get(input, ArSize);
	}

	cout << "Bye\n";

	return 0;
}

void strcount(const char* str)
{
	static int total = 0;
	int count = 0;
	
	while(*str++)
		count++;
	total += count;

	cout << count << " characters" << endl;
	cout << total << " characters total" << endl;

	return ;
}


