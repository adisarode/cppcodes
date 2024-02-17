#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int y = 20;

	cout<<x<<endl;

	int *iptr = &x;

	cout<<*iptr<<endl;

	*iptr = 60;

	cout<<*iptr<<endl;

	int *iptr2 = &y;

	iptr = iptr2;

	cout<<*iptr<<endl;
	cout<<*iptr2<<endl;

	return 0;
}
