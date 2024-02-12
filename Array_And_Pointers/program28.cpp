//Addition of pointer and integer
#include<iostream>

using namespace std;

int main() {

	char ch1 = 'x';
	char ch2 = 'y';
	char ch3 = 'z';

	char *ptr = &ch1;

	cout<<ptr<<endl;
	cout<<*ptr<<endl;

	cout<<(ptr+1)<<endl;
	cout<<*(ptr+1)<<endl;

	cout<<(ptr+2)<<endl;
	cout<<*(ptr+2)<<endl;

	return 0;
}
