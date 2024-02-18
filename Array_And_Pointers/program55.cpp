//2D Array
#include<iostream>

using namespace std;

int main() {

	int arr1[3] = {1,2,3,4};//error:too many initializers 

	int arr2[][3] = {{1,2,3,4},{5,6},{7,8,9}};//error:too many initializers

	cout<<arr1[3]<<endl;
	cout<<arr2[0][3]<<endl;

	return 0;
}
