//if-else ladder
#include<iostream>

int main() {

	int pMoney;
	std::cout<<"Enter Money\n";
	std::cin>>pMoney;

	if(pMoney>=2500)
		std::cout<<"hotel happipola\n";
	
	else if(pMoney>=2000)
		std::cout<<"hotel Co2\n";
	
	else if(pMoney>=1000)
		std::cout<<"hotel sarovar\n";
	
	else if(pMoney>=500)
		std::cout<<"hotel vaishali\n";

	else
		std::cout<<"plan cancel\n";

	return 0;
}
