#include<iostream>

using namespace std;

int main() {

	int arr[] = {10,20,30,40,50};

	int *iptr = &(arr[0]);
	
	(*iptr)++; //*iptr = *iptr+1;

	for(int i=0;i<5;i++) {
	
		cout<<arr[i]<<endl;
	}
	return 0;
}
