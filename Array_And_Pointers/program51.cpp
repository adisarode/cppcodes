//Relationship between Array and Pointer
#include<iostream>

using namespace std;

int main() {

	int size;
	cout<<"Enter the Array size:\n";
	cin>>size;

	int arr[size];
	cout<<"Enter the Element of Array:\n";
	for(int i=0;i<size;i++) {
	
		cin>>arr[i];
	}

	int *ptr = &arr[0];

	cout<<"Array Elements Are:\n";
	for(int i=0;i<size;i++) {
	
		cout<<arr[i]<<endl;
		cout<<*(arr+i)<<endl;
	}

	return 0;

}
