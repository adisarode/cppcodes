//Dangling Pointer

#include<iostream>

using namespace std;

	int a = 10;
	int b;
	int *iptr = 0;

void fun() {

	int x = 30;

	cout<<a<<endl;
	cout<<b<<endl;

	iptr = &x;

	cout<<iptr<<endl;
	cout<<*iptr<<endl;
}

int main() {

	int y = 40;
	 
	cout<<a<<endl;
	cout<<b<<endl;
	fun();

	cout<<iptr<<endl;//Dangling pointer 
	cout<<*iptr<<endl;//Dangling pointer
	
	return 0;
}
