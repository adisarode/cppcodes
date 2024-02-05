#include<iostream>

int main() {

	int x=8;
	int ans;

	std::cout<<x<<std::endl;
	
	ans=x++ + ++x;
	std::cout<<x<<std::endl;
	std::cout<<ans<<std::endl;

	return 0;
}
