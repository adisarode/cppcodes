//Wild pointer

#include<iostream>

int main() {

	int x = 10;

	int *iptr; //Wild pointer

	std::cout<<*iptr<<std::endl;//garbage value OR segmentation fault

	return 0;
}
