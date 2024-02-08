//comparison of Arrays 
#include<iostream>

using namespace std;

int main() {

	int size;
	cout<<"Enter Array size: \n";
	cin>>size;

	int arr1[size];
	cout<<"Enter Array1 Elements: \n";
	for(int i=0;i<size;i++){
	
		cin>>arr1[i];
	}
	
	int arr2[size];
	cout<<"Enter Array2 Elements: \n";
	for(int i=0;i<size;i++){
	
		cin>>arr2[i];
	}

	int flag=1;

	for(int i=0;i<size;i++) {
	
		if(arr1[i] != arr2[i]) {
		
			flag=0;
			break;
		}
			
	}
	if(flag==1)
	
		cout<<"Both Arrays Elements are equal:\n";
	else 

		cout<<"Both Arrays Elements are not equal:\n";

	return 0;
	
}
