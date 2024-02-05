#include<iostream>

int main() {

	int x=0;
	int y=7;
	int ans;

	ans=x||y;
	std::cout<<ans<<std::endl;//1

	ans=x&&y;
	std::cout<<ans<<std::endl;//0

	return 0;
}
