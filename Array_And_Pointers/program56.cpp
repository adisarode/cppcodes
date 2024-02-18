//2D Array
#include<iostream>

using namespace std;

int main() {

	int arr[2][5];
	
	cout<<"Enter Array Elements:\n";

	for(int rows=0;rows<2;rows++){
	
		for(int cols=0;cols<5;cols++) {
		
			cin>>arr[rows][cols];
		}
	}

	cout<<"Array Elements Are:\n";

	for(int rows=0;rows<2;rows++) {
	
		for(int cols=0;cols<5;cols++) {
		
			cout<<arr[rows][cols]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<10;i++) {
	
	
		cout<<arr[i]<<endl;
	}
	return 0;

}
