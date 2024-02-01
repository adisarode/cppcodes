#include<iostream>

int main() {

	int n;
	std::cout<<"Enter a number\n";
	std::cin>>n;

	int fact = 1;
		
	for(int i = 1;i<=n;i++) {

		fact = fact*i;
	}
	std::cout<<fact<<std::endl;
}
