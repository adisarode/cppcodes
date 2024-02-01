//find the factorial of number take a input from user
#include<iostream>

int main() {

	int num;
	std::cout<<"Enter a non negative interger\n";
	std::cin>>num;

	if(num<0) {
	
		std::cerr<<"factorial is not defined for negative number\n";
		return 1;
	}

	unsigned long result = 1;

	for(int i=1;i<=num;i++) {
	
		result *=i;
	}
	std::cout<<result<<std::endl;
	return 0;
}
