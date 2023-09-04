/* 
左值是可以开辟内存空间的值，可以对其使用&取地址操作符
右值则不可以

常规的引用就是左值引用	如
int a = 10;
int& b = a;		//可行，a为左值
int& c = 10;	//不可行，10为右值
int& d = a + b	//不可行，a + b为右值

但是const关键字可以使用引用右值
因为其在内存中开辟了一块（右值类型大小）空间（临时变量）存储右值
但是不能通过引用去修改这块临时空间内的取值

如
const int& e = 10;	//	可行

**右值引用**
int&& x = 10;


 */


#include <iostream>

using namespace std;

int main(void)
{
	int a = 10;
	int b = 20;

	int *p = &a;
	
	int&& x = 10;
	int&& y = a + b;

	return 0;

}





