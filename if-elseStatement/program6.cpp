#include<iostream>

int main() {

	int x;
	std::cout<<"Enter value\n";
	std::cin>>x;

	if(x%4==0 && x%5==0){
	
		std::cout<<"value is divisible by 4 and 5 \n";
	}else{
		std::cout<<"value is not divisible by 4 and 5 \n";
	}
	return 0;
}
