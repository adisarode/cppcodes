#include<iostream>

int main() {

	for(int i=0;i<=127;i++) {
	
		std::cout<<static_cast<char>(i)<<"= "<<i<<std::endl;
	}
	return 0;
}
