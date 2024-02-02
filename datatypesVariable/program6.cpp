#include<iostream>

int main(){

	int x=5;
	std::cout<<x<<std::endl;

	int output;
	std::cout<<output<<std::endl;//zero OR garbage value

	output=x;
	std::cout<<x<<std::endl;
	std::cout<<output<<std::endl;

	return 0;
}
