#include<iostream>

int main() {

	int age=21;
	float petPrice=105.65;
	double gold=10.123456789123;
	char wing='A';

	std::cout<<age<<std::endl;
	std::cout<<petPrice<<std::endl;
	std::cout<<gold<<std::endl;
	std::cout<<wing<<std::endl;

	std::cout<<"sizeof int="<<sizeof(int)<<std::endl;
	std::cout<<"sizeof flot="<<sizeof(float)<<std::endl;
	std::cout<<"sizeof double="<<sizeof(double)<<std::endl;
	std::cout<<"sizeof char="<<sizeof(char)<<std::endl;
	std::cout<<"sizeof void="<<sizeof(void)<<std::endl;

	return 0;
}
