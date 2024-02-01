//Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.

#include<iostream>

int main() {

//	int age = 22;

	int pAge;

	std::cout<<"Enter the age of the person"<<std::endl;
	std::cin>>pAge;

	if(pAge>18)
		std::cout<<"Adult"<<std::endl;
	else	
		std::cout<<"Teenager"<<std::endl;
}

