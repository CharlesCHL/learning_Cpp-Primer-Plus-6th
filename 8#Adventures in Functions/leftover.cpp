

#include <iostream>
#include <string>


using namespace std;

const int ArSize = 80;

char* left(const char*, int);
unsigned long left(unsigned long, unsigned int);

int main(void)
{
	unsigned long n = 12345678;
	const char* trip = "Hawaii";
	char* temp;
	
	int i;
	for(i = 0; i < 10; i++)
	{
		cout << left(n, i) << endl;
		temp = left(trip, i);
		cout << temp << endl;
		delete [] temp;
		cout << "-------------" << endl;
	}
	
	
	return 0;

}


unsigned long left(unsigned long num, unsigned int ct)
{
	if(num == 0 || ct == 0)
		return 0;

	unsigned long n = num;
	unsigned int digits = 1;
	while(n /= 10)
		digits++;
	if(digits <= ct)
		return num;
	
	for(int i = 0; i < (digits - ct); i++)
	{
		num /= 10;
	}
	
	return num;
}

char* left(const char* str, int n)
{
	int m = 0;
	while(m < n && str[m] != '\0')
		m++;
	int i;
	char* p = new char[m + 1];
	for(i = 0; i < m; i++)
		p[i] = str[i];
	p[i] = '\0';
	return p;
}



