

#include <iostream>

using namespace std;

extern double warming;

void update(double);
void local(void);

void update(double dt)
{
	warming += dt;
	cout << "Updating global warming to " << warming << " degrees." << endl;
	return ;
}

void local(void)
{
	double warming = 0.8;

	cout << "Local warming is " << warming << " degrees." << endl;

	cout << "But global warming is " << ::warming << " degrees." << endl;

	return ;
}






