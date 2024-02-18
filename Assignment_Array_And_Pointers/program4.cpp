//WAP to the array elements in reverse order Take array size and array elements from the user .
#include<iostream>

using namespace std;

int main () {

	int size;
	cout<<"Enter Array size: ";
	cin>>size;

	int arr[size];

	cout<<"Enter Array Elements: ";
	for(int i=0;i<size;i++) {
	
		cin>>arr[i];
	}
	cout<<"Array elements in reverse order: ";
	for(int i=3;i>=0;i--) {
	
		cout<<arr[i]<<" ";
	}
	return 0;
}
