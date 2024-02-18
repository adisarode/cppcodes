// WAP to calculate the count of even and odd elements Take array size and array elements from the user.

#include<iostream>

using namespace std;

int main() {

	int size;
	cout<<"Enter Array size: ";
	cin>>size;
	int arr[size];

	int OddCount=0;
	int EvenCount=0;

	cout<<"Enter Array Elements: ";
	for(int i=0;i<size;i++) {
	
		cin>>arr[i];

		if(arr[i]%2==0) 
			EvenCount++;
		else
			OddCount++;
	}

	cout<<"odd element count is: "<<OddCount<<endl;
	cout<<"even element count is: "<<EvenCount<<endl;

	return 0;

}
