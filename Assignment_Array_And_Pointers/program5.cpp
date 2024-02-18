//Write output and draw a proper diagram.
#include<iostream>

using namespace std;

int main () {

	int x = 10;
	
	int *ptr = &x;
	char *cptr = &x;
	
	cout<<*ptr<<endl;//10;
	cout<<*cptr<<endl;//cannot convert int* to char* in initialization.

	return 0;
}
