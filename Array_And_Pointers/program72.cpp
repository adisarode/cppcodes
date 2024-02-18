//2D Array

#include<iostream>

using namespace std;

int main() {

	int arr[3][3] = {10,20,30,40,50,60,70,80,90};

	cout<<&arr<<endl;
	cout<<arr<<endl;
	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;
	cout<<&arr[0]<<endl;
	cout<<&arr[1]<<endl;

	cout<<*(*(arr+0)+0)<<endl;//10
	cout<<*(*(arr+0)+1)<<endl;//20
	cout<<*(*(arr+0)+2)<<endl;//30
	cout<<*(*(arr+1)+0)<<endl;//40
	cout<<*(*(arr+1)+1)<<endl;//50
	cout<<*(*(arr+1)+2)<<endl;//60
	cout<<*(*(arr+2)+0)<<endl;//70
	cout<<*(*(arr+2)+1)<<endl;//80
	cout<<*(*(arr+2)+2)<<endl;//90

	return 0;
}
