//3D Array 
#include<iostream>

using namespace std;

int main() {

	int plane;
	cout<<"Enter Plane: ";
	cin>>plane;

	int rows;
	cout<<"Enter Rows: ";
	cin>>rows;

	int cols;
	cout<<"Enter Columns: ";
	cin>>cols;

	int sum = 0;

	int arr[plane][rows][cols];

	for(int i=0;i<plane;i++) {

		cout<<"plane: "<<i<<endl;
		for(int j=0;j<rows;j++) {

			for(int k=0;k<cols;k++) {
			
				cin>>arr[i][j][k];
				if(j==0)
					sum = sum+arr[i][j][k];
			}
		}
	}
	cout<<"Sum of first rows of both Plane: "<<sum<<endl;
	return 0;
}
