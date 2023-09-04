


#include <iostream>

using namespace std;

void cheers(int);
double cube(double);

int main()
{
    double side;
    double volume;

    cheers(5);

    cout << "Give me a number: ";
    cin >> side;
    volume = cube(side);

    cout << side << " cube = " << volume << endl;
    
    cheers(cube(2.1));

    return 0;
}

void cheers(int n)
{
    int i;
    for(i = 0; i < n; i++)
        cout << "Cheers ";
    cout << endl;
    return ;
}

double cube(double x)
{
    return x * x * x;
}

