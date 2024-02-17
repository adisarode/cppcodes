#include<iostream>

int main() {

	int x = 10;

	int *iptr = NULL;

	iptr = &x;

	std::cout<<*iptr<<std::endl;

	return 0;
}
