
#include<iostream>

int main() {

	int input;
	int x = 2;
	int y = 3;

	std::cout<<"Enter number\n";
	std::cin>>input;

	switch(input) {
	
		case 5:
			std::cout<<"5\n";
			break;

		case x+y:
			std::cout<<"2+3\n";
			break;

		case y+x:
			std::cout<<"3+2\n";
			break;
	
		default:
			std::cout<<"In default\n";
	}
}
