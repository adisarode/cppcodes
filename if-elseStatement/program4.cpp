#include<iostream>

int main() {

	int x=1;

	std::cout<<"start code\n";

	if(--x) {
	
		std::cout<<"In first if block\n";
	}
	if(++x || x++) {
	
		std::cout<<"In second if block\n";
	}
	std::cout<<"x="<<x<<std::endl;
	std::cout<<"End code\n";

	return 0;
}
