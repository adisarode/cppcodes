//if-else ladder
#include<iostream>

int main(){

	int Money;
	std::cout<<"Enter Money\n";
	std::cin>>Money;

	if(Money>=15000)
		std::cout<<"Goa\n";

	else if(Money>=12000)
		std::cout<<"Udaypur\n";

	else if(Money>=8000)
		std::cout<<"Coimbotore\n";

	else if(Money>=5000)
		std::cout<<"Kashi\n";

	else if(Money>=2000)
		std::cout<<"Trimbakeshwar\n";

	else if(Money>=1000)
		std::cout<<"Harihar fort\n";

	else
		std::cout<<"Trip cancel\n";

	return 0;
}

