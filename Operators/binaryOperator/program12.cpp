#include<iostream>

int main() {

	int x=0;
	int y=5;
	int ans;

	ans= x++ || ++y;
	std::cout<<ans<<std::endl;//1
	std::cout<<x<<std::endl;//1
	std::cout<<y<<std::endl;//6

	ans= x++ && y++;
	std::cout<<ans<<std::endl;//1
	std::cout<<x<<std::endl;//2
	std::cout<<y<<std::endl;//7
			
	return 0;
}
