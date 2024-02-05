#include<iostream>

int main() {

	int x=8;
	int y=11;
	int ans;

	ans= ++x||++y;
	std::cout<<ans<<std::endl;//1
	std::cout<<x<<std::endl;//9
	std::cout<<y<<std::endl;//11

	ans= x++&&++y;
	std::cout<<ans<<std::endl;//1
	std::cout<<x<<std::endl;//10
	std::cout<<y<<std::endl;//12

	return 0;
}
