#include<iostream>

using namespace std;

int main() {

	int arr[3][3] = {10,20,30,40,50,60,70,80,90};

	cout<<arr[0][2]<<endl;//30
	cout<<arr[1][0]<<endl;//40
	cout<<arr[2][1]<<endl;//80

	cout<<arr<<endl;   
	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;
	cout<<arr[2]<<endl;

	cout<<&arr[0][2]<<endl;
	cout<<&arr[1][1]<<endl;
	cout<<&arr[2][0]<<endl;
			      
	return 0;

}
