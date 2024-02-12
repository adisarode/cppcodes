#include<iostream>

using namespace std;

int main() {

	int x = 10;
	char ch = 'A';

	int *ptr1 = &x;
	char *ptr2 = &ch;

	cout<<ptr1<<endl;
	cout<<ptr2<<endl;
	
	cout<<*ptr1<<endl;
	cout<<*ptr2<<endl;

	return 0;
}
