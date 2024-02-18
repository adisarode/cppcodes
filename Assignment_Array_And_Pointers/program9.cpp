//Write output and draw a good diagram for the code.

#include<iostream>

using namespace std;

int main() {

	int arr1[] = {10,20,30,40,50};
	int arr2[] = {60,70,80,90,100};

	int *ptr1=NULL;
	int *ptr2=NULL;

	ptr1=ptr1+3;
	ptr2=ptr2+2;

	*ptr2=35;//segmentation fault
	
	cout<<"Array 1 Elements Are:\n";
	for(int i=0;i<5;i++) {
	
		cout<<arr1[i]<<" ";;
	}
	cout<<"Array 2 Elements Are:\n";
	for(int i=0;i<5;i++) {
	
		cout<<arr2[i]<<" ";
	}
	return 0;
}
