#include<iostream>

int main() {

	int carSpeed;
	std::cout<<"Enter a carSpeed:\n";
	std::cin>>carSpeed;

	if(carSpeed>100) {
	
		std::cout<<"Overspeed challan\n";
	}else {
	
		std::cout<<"No challan\n";
	}
}
