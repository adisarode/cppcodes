//WAP to add two different arrays of the same size Take array size and array elements from the user.

#include<iostream>

using namespace std;

int main() {

	int size;
	cout<<"Enter Array size: ";
	cin>>size;

	int arr1[size];
	int arr2[size];

	for(int i=0;i<size;i++) {
	
		cout<<"Array 1 Element: ";
		cin>>arr1[i];
		cout<<"Array 2 Element: ";
		cin>>arr2[i];
	}
	for(int i=0;i<size;i++) {
	
		cout<<arr1[i]+arr2[i]<<" ";
	}

	return 0;

}
