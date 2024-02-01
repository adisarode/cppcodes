#include<iostream>

int a=10;//global variable

void fun() {

	int x=20;
	std::cout<<"In fun\n";
}
int main() {

	int y=30;//local variable
	std::cout<<"start main\n";

	fun();
	std::cout<<"End main\n";

	return 0;
}

