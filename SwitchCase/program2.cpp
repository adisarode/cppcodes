#include<iostream>

int main() {

	int x;
	std::cout<<"Enter value: \n";
	std::cin>>x;

	switch(x) {
	
//		case 65:
//			std::cout<<"value of x is 65\n";
//			break;

		case 'A':
			std::cout<<"value of x is A\n";
			break;

//		case 66:
//			std::cout<<"value of x is 66\n";
//			break;

		case 'B':
			std::cout<<"value of x is B\n";
			break;

//		case 67:
//			std::cout<<"value of x is 66\n";
//			break;

		case 'C':
			std::cout<<"value of x is C\n";
			break;

		default: 
			std::cout<<"Wrong Input\n";
	}
}
