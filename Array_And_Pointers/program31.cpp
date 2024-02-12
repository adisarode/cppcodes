#include<iostream>

int main() {

	int arr[] = {10,20,30,40};

	int *ptr1 = &(arr[1]);

	std::cout<<ptr1<<std::endl;
	std::cout<<*ptr1<<std::endl;
	std::cout<<*(ptr1+2)<<std::endl;

	return 0;
}
