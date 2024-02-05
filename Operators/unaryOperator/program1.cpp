#include<iostream>

int main() {

	int x=5;
	int output;

	std::cout<<x<<std::endl;       //5
	std::cout<<output<<std::endl;  //zero OR garbage value.

	output=++x;

	std::cout<<x<<std::endl;      //6
	std::cout<<output<<std::endl; //6

	return 0;
	
}
