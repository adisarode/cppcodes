//pointer subtraction with integer
#include<iostream>

using namespace std;

int main() {

	int arr[] = {10,20,30,40,50};

	int *ptr = &arr[1];

	cout<<ptr<<endl;
	cout<<*(ptr-1)<<endl;//10

	return 0;
}
