
// 10.12

#include <iostream>
#include <cctype>

#include "stack.h"

using namespace std;

int main(void)
{
	char ch;
	unsigned long po;
	Stack st;

	std::cout << "Please enter:\n"
			  << "A to push to stack.\n"
			  << "P to pop stack.\n"
			  << "Q to quit.\n";
	while(cin >> ch && toupper(ch) !=  'Q')
	{
		while(cin.get() != '\n')
			continue;
		switch(ch)
		{
			case 'A':
			case 'a':
				cout << "Enter a number you want to push to stack:";
				cin >> po;
				if(st.isfull())
					cout << "Stack already full.\n";
				else
					st.push(po);
				break;
			case 'P':
			case 'p':
				if(st.isempty())
					cout << "Stack is empty.\n";
				else
				{
					st.pop(po);
					cout << po << " is poped.\n";
				}
				break;
			default:
				cout << "ERROR.\n";
				break;
		}
//		while(cin.get() != '\n')
//			continue;
		cout  << "Please enter:\n"
			  << "A to push to stack.\n"
			  << "P to pop stack.\n"
			  << "Q to quit.\n";
	}

	cout << "Bye.\n";

	return 0;
}

