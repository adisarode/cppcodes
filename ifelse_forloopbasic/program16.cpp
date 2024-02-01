//prime number
#include<iostream>

int main() {

	int n;
	std::cout<<"Enter the number: ";
	std::cin>>n;
	
	if(n<2) {
	
		std::cout<<"Not a prime number\n";
		return 0;
	}
	else
	{
	
		for(int i=2;i<n;i++){
			
			if(n%i==0) { 

			std::cout<<"Not a prime number\n";
			return 0;
			}
		}
		std::cout<<"Prime number\n";
		return 0;

	}
	return 0;
}
