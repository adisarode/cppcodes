#include<iostream>

using namespace std;

int main() {

	char x = 'A';
	char y = 'B';
	char z = 90;

	char *ptr1 = &x;
	char *ptr2 = &y;
	char *ptr3 = &z;

	cout<<*ptr1+*ptr2<<endl;
	cout<<*ptr3<<endl;

	return 0;

}
