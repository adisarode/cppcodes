//calculate the power of number
#include<iostream>

int main() {

	int n,pow,num;
	std::cout<<"Enter the number\n";
	std::cin>>n;

	std::cout<<"Enter the power\n";	
	std::cin>>pow;
	
	num=n;
	for(int i=1;i<pow;i++) {
	
	 num=num*n;	

	}
	std::cout<<num;
}
