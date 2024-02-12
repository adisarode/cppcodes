//Subtraction of two Pointers.
#include<iostream>

using namespace std;

int main() {

	int arr[] = {10,20,30,40,50};

	int *ptr1 = &arr[0];
	int *ptr2 = &arr[3];

	cout<<*ptr1<<endl;//10
	cout<<*ptr2<<endl;//40

	cout<<ptr2-ptr1<<endl;//3
	cout<<ptr1-ptr2<<endl;//-3

	return 0;
}
