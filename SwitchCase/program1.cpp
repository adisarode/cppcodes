#include<iostream>

int main() {

	int x;
	std::cout<<"Enter Value in between 1-10: \n";
	std::cin>>x;

	switch(x) {	       
		
		case 1:
			std::cout<<"One\n";
			break;
		
		case 2:
			std::cout<<"Two\n";
			break;

		case 3:
			std::cout<<"Three\n";
			break;
	
		case 4:
			std::cout<<"Four\n";
			break;
	
		case 5:
			std::cout<<"Five\n";
			break;
	
		case 6:
			std::cout<<"Six\n";
			break;
	
		case 7:
			std::cout<<"Seven\n";
			break;
	
		case 8:
			std::cout<<"Eight\n";
			break;
	
		case 9:
			std::cout<<"Nine\n";
			break;
	
		case 10:
			std::cout<<"Ten\n";
			break;	
	
		default:
			std::cout<<"Wrong Input\n";
	}
}
