#include<iostream>

int main() {

	int arr[] = {10,20,30,40,50};

	int *ptr = &(arr[0]);

	ptr++;

	std::cout<<*ptr<<std::endl;//20
	++ptr;

	std::cout<<*ptr<<std::endl;//30

	return 0;
}
