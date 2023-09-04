

#include <iostream>

int main()
{
	using namespace std;

	cout.setf(ios_base::fixed, ios_base::floatfield);

	cout << "Integer division: 9 / 5 = " << 9 /5 << endl
		 << "Float division : 9.0 / 5.0 = " << 9.0 / 5.0 << endl
		 << "Mixed division : 9.0 / 5 = " << 9.0 / 5 << endl	
		 << "Double division : 1e7 / 9.0 = " << 1e7 / 9.0 << endl
		 << "Float division : 1e7f / 9.0f = " << 1e7f / 9.0f << endl
		 << endl;

	return 0;

}


