//Array of integer Pointers.
#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int y = 20;
	int z = 30;

	int* arr[3] = {&x,&y,&z};//Array of pointers.
	
	cout<<sizeof(arr)<<endl;//24
	
	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;
	cout<<arr[2]<<endl;

	cout<<*arr[0]<<endl;//10
	cout<<*arr[1]<<endl;//20
	cout<<*arr[2]<<endl;//30

	return 0;
}
