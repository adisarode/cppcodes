//Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.

#include<iostream>

int main() {

	int n;
	
	std::cout<<"Enter a number\n"; 
	std::cin>>n;

	if(n<1 || n>12)
		std::cout<<"wrong input"<<std::endl;
	
	else if(n==1)
		std::cout<<"January\n";

	else if(n==2)
		std::cout<<"February\n";

	else if(n==3)
		std::cout<<"March\n";

	else if(n==4)
		std::cout<<"April\n";

	else if(n==5)
		std::cout<<"May\n";
	
	else if(n==6)
		std::cout<<"June\n";

	else if(n==7)
		std::cout<<"July\n";

	else if(n==8)
		std::cout<<"August\n";

	else if(n==9)
		std::cout<<"Sept\n";

	else if(n==10)
		std::cout<<"October\n";

	else if(n==11)
		std::cout<<"November\n";

	else if(n==12) 
		std::cout<<"December\n";

}
