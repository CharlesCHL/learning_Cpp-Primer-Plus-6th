

#include <iostream>

using namespace std;

long double probablity(unsigned int, unsigned int);

int main()
{
    unsigned int total, choices;
    double rate;
    cout << "Enter the total number of choices on the game card and the number of the picks allowed: " << endl;
    while((cin >> total >> choices) && choices < total)
    {
        rate = probablity(total, choices);
        cout << "You have one chance in " << rate << " of winning." << endl;
        cout << "Enter the total number of choices on the game card and the number of the picks allowed(q to quit): " << endl;
    }
    cout << "BYE" << endl;
    return 0;
}

long double probablity(unsigned int numbers, unsigned int picks)
{
    long double prob = 1.0;
    double n, p;
    for(n = numbers, p = picks; p > 0; n--, p--)
    {
        prob = prob * p / n;
    }
    return prob;
}



