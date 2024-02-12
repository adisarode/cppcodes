//Addition of two value at pointers.
//Addition of two pointers are not allowed.
#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int y = 20;

	int *ptr1 = &x;
	int *ptr2 = &y;

	cout<<*ptr1 + *ptr2<<endl;
//	cout<<ptr1+ptr2<<endl;//Addition of two pointers are not allowed.

	return 0;
}
