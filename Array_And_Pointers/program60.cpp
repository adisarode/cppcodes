//sizeof 2D Array
#include<iostream>

using namespace std;

int main() {

	int arr[3][3] = {10,20,30,40,50,60,70,80,90};

	cout<<sizeof(arr)<<endl;//36
	cout<<sizeof(arr[0])<<endl;//12
	cout<<sizeof(arr[0][0])<<endl;//4

	return 0;
}
