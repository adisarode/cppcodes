//Sum of diagonal of Array

#include<iostream>

using namespace std;

int main() {

	int arr[][3] = {10,20,30,40,50,60,70,80,90};

	int sum=0;
	for(int rows=0;rows<3;rows++) {
	
		for(int cols=0;cols<3;cols++) {
	
			cout<<arr[rows][cols]<<" ";	
			if(rows==cols)
				sum = sum + arr[rows][cols];
		}
		cout<<endl;
	}
	cout<<"Sum of diagonal of Array: "<<sum<<endl;
	return 0;
}
