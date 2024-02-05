//bitwise ^-XOR
#include<iostream>

int main() {

	int x=4;
	int y=5;
	int ans;

	ans= x-- ^ ++y;
	std::cout<<x<<std::endl;  //3
	std::cout<<y<<std::endl;  //6
	std::cout<<ans<<std::endl;//2

	return 0;
}

