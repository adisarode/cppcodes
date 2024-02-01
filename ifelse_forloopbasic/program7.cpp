//Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
#include<iostream>

int main() {
	int n;
	std::cin>>n;

	for(int i = 1; i <= n; i++) {
	
		if(i%4==0)
		std::cout << i <<std::endl;
	}

}
