#include<iostream>

int main() {

	int x=0;
	int y=5;
	int ans;

	ans = x++ || --x;
	std::cout<<ans<<std::endl;//0
	std::cout<<x<<std::endl;//0
	std::cout<<y<<std::endl;//5

	ans = x && --y;
	std::cout<<ans<<std::endl;//0
	std::cout<<x<<std::endl;//0
	std::cout<<y<<std::endl;//5
}
