// bitwise OR

#include<iostream>

int main() {

	int x=6;
	int y=7;
	int ans;

	ans= x-- | ++y;
	std::cout<<x<<std::endl;
	std::cout<<y<<std::endl;
	std::cout<<ans<<std::endl;

	return 0;
}
