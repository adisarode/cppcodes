#include<iostream>

int main() {

	int marks;
	std::cout<<"Enter the marks\n";
	
	std::cin>>marks;
	std::cout<<"marks is="<<marks<<std::endl;

	if(marks>=0 && marks<=34){
	
		std::cout<<"You are fail\n";
	}

	if(marks>=35 && marks<=74){
	
		std::cout<<"You are pass\n";
	}

	if(marks>=75 && marks<=100){
	
		std::cout<<"You are passed with distinction\n";
	}
	return 0;
}
