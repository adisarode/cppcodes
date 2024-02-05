#include<iostream>

int main() {

	int x=8;
	int ans;

	std::cout<<x<<std::endl;//8

	ans= ++x + ++x + ++x;
	std::cout<<x<<std::endl;//11
	std::cout<<ans<<std::endl;//31

	return 0;
}
