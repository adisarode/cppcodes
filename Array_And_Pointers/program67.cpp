//Pointer to an Array
#include<iostream>

using namespace std;

int main() {

	int arr[] = {10,20,30,40,50};

	int *ptr1 = arr;
	int *ptr2 = &arr[2];
	int (*ptr3)[5] = &arr;

	cout<<*ptr1<<endl;
	cout<<*ptr2<<endl;
	cout<<ptr3<<endl;
	cout<<**ptr3<<endl;

	return 0;

}
