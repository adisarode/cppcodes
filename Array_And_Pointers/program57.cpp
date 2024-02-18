//Sum of Array elements of 2D Array
#include<iostream>

using namespace std;

int main() {

	int rows;
	cout<<"Enter rows: \n";
	cin>>rows;

	int cols;
	cout<<"Enter cols: \n";
	cin>>cols;

	int arr[rows][cols];

	cout<<"Enter Array Elements:\n";
	int sum = 0;
	for(int i=0;i<rows;i++) {
	
		for(int j=0;j<cols;j++) {
		
			cin>>arr[i][j];	
			sum = sum + arr[i][j];
		}

	}
	cout<<"Array Elements Are:\n";
	for(int i=0;i<rows;i++) {
	
		for(int j=0;j<cols;j++) {
		
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Sum of Array Elements Are: "<<sum<<endl;
	
	return 0;
}
