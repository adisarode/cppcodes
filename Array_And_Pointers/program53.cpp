//Pointer to an Array
#include<iostream>

using namespace std;

int main() {

	int arr1[] = {10,20,30,40,50};
	int arr2[] = {60,70,80,90,100};

	int *ptr1 = arr1+1;

//	int *ptr2 = &arr1+1; //error
	int (*ptr2)[] = &arr1+1;//Pointer to an array
	
	cout<<*ptr1<<endl;
	cout<<**ptr2<<endl;

	return 0;
}

