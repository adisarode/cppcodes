//sum of Array Elements.
#include<iostream>

int main() {

        int iarr[5];
	int sum=0;

        std::cout<<"Enter Array Elements:\n";
        for(int i=0;i<5;i++){

                std::cin>>iarr[i];
        }
        for(int i=0;i<5;i++){
			
			sum=sum+iarr[i];
        }
	std::cout<<"Sum of Array Elements Are:\n";
	std::cout<<sum<<std::endl;

        return 0;
}

