//comma(,) operator
#include<iostream>

int main() {

/*	int x=10,20,30;
	std::cout<<x<<std::endl;//error:expected identifier

	int y={10,20,30};//warning excess element in scalar initializer
	std::cout<<y<<std::endl;
*/
	int z=(10,20,30);//30  comma operator
	std::cout<<z<<std::endl;

	return 0;

}
