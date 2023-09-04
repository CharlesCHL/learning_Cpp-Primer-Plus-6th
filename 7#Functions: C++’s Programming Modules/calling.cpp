

#include <iostream>

using namespace std;

void simple(void);

int main()
{
    cout << "main() will call the simple() function: " << endl;

    simple();

    return 0;
}

void simple(void)
{
    cout << "I'm but a simple function." << endl;
    return ;
}


