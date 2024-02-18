//Array of void Pointers.
#include<iostream>

using namespace std;

int main() {

	int x = 10;
	char ch= 'A';
	double d = 61.03;

	void* arr[3] = {&x,&ch,&d};//Array of different datatype of Pointers using void* array.

	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;
	cout<<arr[2]<<endl;

	cout<<*static_cast<int*>(arr[0])<<endl;//typecast void* into int* because we can't dereference void*
	cout<<*static_cast<char*>(arr[1])<<endl;//typecast void* into char* because we can't dereference void*
	cout<<*static_cast<double*>(arr[2])<<endl;//typecast void* into double* because we can't dereference void*

	return 0;
}
