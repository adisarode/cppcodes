//Print all Odd numbers from 1 to n, take n as an input from the user.

#include<iostream>

int main() {
	int n;
	std::cin>>n;

	for(int i = 1; i <= n;i+=2) {
        
		std::cout << i <<std::endl;
	}

}
