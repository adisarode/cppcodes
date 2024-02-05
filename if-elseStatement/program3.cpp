#include<iostream>

int main() {

	std::cout<<"start main\n";

	char ch1='A';
	char ch2='b';

	if(ch1){
	
		std::cout<<"In first if block\n";
	}
	std::cout<<"ch2="<<ch2<<std::endl;
	if(ch2){
	
		std::cout<<"In second if block\n";
	}
	std::cout<<"End main"<<std::endl;
	return 0;
}
