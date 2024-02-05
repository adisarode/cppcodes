#include<iostream>

	int x=10;

	void fun(){
	
		int y=20;
		int ans;
		ans=++x + ++y;

		std::cout<<ans<<std::endl;
	}

int main() {

	std::cout<<"In main\n";
	fun();
	std::cout<<x<<std::endl;
	std::cout<<"End main\n";

	return 0;
}
