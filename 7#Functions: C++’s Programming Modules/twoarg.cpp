

#include <iostream>

using namespace std;

void n_chars(char, int);

int main()
{
    char ch;
    int times;

    cout << "Enter a character: ";
    cin >> ch;

    while(ch != 'q')
    {
        cout << "Enter a integer: ";
        cin >> times;

        n_chars(ch, times);
        cout << endl;
        cout << "Enter another character or press q_key to quit: ";
        cin >> ch;
    }
    return 0;
}

void n_chars(char ch, int n)
{
    while(n-- > 0)
        cout << ch;
}


