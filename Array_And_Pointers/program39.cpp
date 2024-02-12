#include<iostream>

using namespace std;

int main() {

	int x = 10;
	 
	int *iptr = &x;
	char *cptr = &x;//error:cannot convert int* to char* in initialization

	cout<<*iptr<<endl;
	cout<<*cptr<<endl;

	return 0;
}
