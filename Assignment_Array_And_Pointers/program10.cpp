//WAP to find the sum of odd numbers in the given array from the user.

#include<iostream>

using namespace std;

int main() {

	int size;
	cout<<"Enter Array size: ";
	cin>>size;

	int arr[size];
	
	cout<<"Enter Array Elements: ";
	int sum=0;
	for(int i=0;i<size;i++) {
	
		cin>>arr[i];
		if(arr[i]%2!=0) {
		
			sum += arr[i];
		}
	}
	cout<<"Sum of odd index elements is: "<<sum<<endl;

	cout<<"indexes of odd elements are: ";
	for(int i=0;i<size;i++) {
	
		if(arr[i]%2!=0) 
			cout<<i<<" ";
	}

	return 0;
}
