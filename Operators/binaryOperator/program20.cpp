// left shift and right shift operator
#include<iostream>

int main() {

	int x=17;
	int y=68;
	int ans;

	ans= x<<3;
	std::cout<<ans<<std::endl;//136

	ans= y>>2;
	std::cout<<ans<<std::endl;//17

	ans= x-- << 3;
	std::cout<<ans<<std::endl;//136
	std::cout<<x<<std::endl;//16

	ans= ++y >> 4;
	std::cout<<ans<<std::endl;//4
	std::cout<<y<<std::endl;//69

	return 0;
}
