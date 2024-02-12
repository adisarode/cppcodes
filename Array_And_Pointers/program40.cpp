//pointer subtraction with integer
#include<iostream>

int main() {

	int arr[] = {10,20,30,40,50};

	int *ptr = &arr[1];

	std::cout<<ptr<<std::endl;
	std::cout<<*(ptr-1)<<std::endl;//10

	return 0;
}
