#include<iostream>

int main() {

	int arr[] = {10,20,30,40};

	int *ptr1 = &(arr[0]);

	std::cout<<*(ptr1++)<<std::endl;//10
	std::cout<<*(++ptr1)<<std::endl;//30

	return 0;
}
