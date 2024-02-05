#include<iostream>

int main() {

	int x=5;
	int ans;

	std::cout<<x<<std::endl;//5
	ans=x++ + x++;

	std::cout<<x<<std::endl;//7
	std::cout<<ans<<std::endl;//11

	return 0;
}
