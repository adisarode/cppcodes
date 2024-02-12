#include<iostream>

using namespace std;

int main() {

	int arr[] = {10,20,30,40};

	int *ptr1 = &(arr[0]);
	int *ptr2 = &(arr[1]);

	int x = ptr1 - ptr2;

	cout<<x<<endl;//-1

//	cout<<*ptr1*ptr2<<endl;//error invalid operands
//	cout<<*ptr1/ptr2<<endl;//error invalid operands
//	cout<<*ptr1%ptr2<<endl;//error invalid operands
			       
	return 0;
}
