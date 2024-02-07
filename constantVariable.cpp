//constant variable

#include<iostream>

int main() {

	const int x = 10;
	std::cout<<x<<std::endl;

	x = 30;           //error: assignment of read only variable x
	std::cout<<x<<std::endl;

	 return 0;
}
