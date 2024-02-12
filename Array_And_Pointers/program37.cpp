#include<iostream>

using namespace std;

int main() {

	int arr[] = {10,20,30,40,50};

	int *ptr = &(arr[0]);

	cout<<ptr<<endl;//0x100

	cout<<*ptr++<<endl;//10
	cout<<*ptr++<<endl;//20

	cout<<ptr<<endl;//0x108

	return 0;
	
}
