//cases should be different.

#include<iostream>

int main() {

	int input;
	std::cout<<"Enter number\n";
	std::cin>>input;

	switch(input) {
	
	case 5:                      //error:previously used here
	     std::cout<<"5";
	     break;

	case 2+3:                    //error:duplicate case value
	     std::cout<<"2+3";
	     break;

	case 3+2:                    //error:duplicate case value
		std::cout<<"3+2";
	     break;

	default:
	     std::cout<<"In default\n";

	}
}
