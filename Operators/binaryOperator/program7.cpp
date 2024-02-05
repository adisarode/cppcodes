#include<iostream>

int main() {

	int x=5;
	int ans;

	std::cout<<x<<std::endl;//5

	ans= ++x + ++x + ++x + ++x;
	std::cout<<x<<std::endl;//9
	std::cout<<ans<<std::endl;//31

	return 0;
}
