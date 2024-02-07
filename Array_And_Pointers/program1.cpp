#include<iostream>

int main() {

	float friendPack[5];
	
	std::cout<<"Enter Package:\n";
	std::cin>>friendPack[0];
	std::cin>>friendPack[1];
	std::cin>>friendPack[2];
	std::cin>>friendPack[3];
	std::cin>>friendPack[4];

	std::cout<<"friend1 Package: "<<friendPack[0]<<std::endl;
	std::cout<<"friend1 Package: "<<friendPack[1]<<std::endl;
	std::cout<<"friend1 Package: "<<friendPack[2]<<std::endl;
	std::cout<<"friend1 Package: "<<friendPack[3]<<std::endl;
	std::cout<<"friend1 Package: "<<friendPack[4]<<std::endl;
	
	return 0;
}
