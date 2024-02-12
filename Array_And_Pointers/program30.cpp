//Only integer numbers work with the sum in pointers; float and double values don't work.

#include<iostream>

using namespace std;

int main() {

	char ch1 = 'x';
	char ch2 = 'y';

	char *ptr = &ch1;

	cout<<ptr<<endl;
	cout<<*ptr<<endl;

	cout<<(ptr+1.5)<<endl;//error:invalid operands types char* and double
	cout<<*(ptr+1.5)<<endl;//error:invalid oprands type char* and double

	return 0;
}
