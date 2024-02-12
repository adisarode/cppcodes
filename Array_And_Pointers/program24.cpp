#include<iostream>

	using namespace std;

	int a = 10;
	char b = 'A';

	int main() {

	float x = 25.5;
	double d = 35.555;

	int *ptr1 = &a;
	char *ptr2 = &b;
	float *ptr3 = &x;
	double *ptr4 = &d;

	cout<<ptr1<<endl;
	cout<<ptr2<<endl;
	cout<<ptr3<<endl;
	cout<<ptr4<<endl;
	cout<<*ptr1<<endl;
	cout<<*ptr2<<endl;
	cout<<*ptr3<<endl;
	cout<<*ptr4<<endl;

	return 0;
}
