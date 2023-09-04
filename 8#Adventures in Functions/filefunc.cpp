

#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

const int LIMIT = 5;

void file_it(ostream&, const double, const double*, int);


int main()
{
	fstream fout;
	const char* fn = "ep-data.txt";
	
	fout.open(fn);
	if(!fout.is_open())
	{
		cout << "Can't open " << fn << ". Bye." << endl;
		exit(EXIT_FAILURE); 
	}

	double objective;
	cout << "Enter the focal length of your telescope objectivein mm : ";
	cin >> objective;

	double eps[LIMIT];
	for(int i = 0; i < LIMIT; i++)
	{
		cout << "Eyepieces # " << i + 1 << " : ";
		cin >> eps[i];
	}

	file_it(cout, objective, eps, LIMIT);
	file_it(fout, objective, eps, LIMIT);

	cout << "Done." << endl;

	return 0;


}

void file_it(ostream& os, const double fo, const double* fe, int n)
{
	os << "Focal length of objective: " << fo << endl;
	os << "f.1. eyepieces\tmagnification" << endl;
	for(int i = 0; i < n; i++)
	{
		os << fe[i] << "\t\t" << int(fo/fe[i] + 0.5) << endl;
	}

}



