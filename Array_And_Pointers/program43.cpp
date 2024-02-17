//Null pointer.
#include<iostream>

int main() {

	int x = 10;

	int *iptr = NULL;   // 0 OR NULL

	std::cout<<*iptr<<std::endl;//segmentation fault 

	return 0;
}
