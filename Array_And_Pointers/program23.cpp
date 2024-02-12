#include<iostream>

using namespace std;

int main() {

	double x = 30.50;
	char y = 'A';

	double *ptr1 = &x;
	char *ptr2 = &y;

	cout<<ptr1<<endl;
	cout<<ptr2<<endl;
	cout<<*ptr1<<endl;
	cout<<*ptr2<<endl;

	return 0;
}
