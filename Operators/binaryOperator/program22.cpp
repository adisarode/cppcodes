#include<iostream>

int main() {

	int x=10;
	std::cout<<"x="<<x<<std::endl;
	std::cout<<&x<<std::endl;

	int z=(10,20,30);
	std::cout<<"z="<<z<<std::endl;
	std::cout<<&z<<std::endl;

	return 0;
}
