#include<iostream>

int main() {

	int iarr[5];

	std::cout<<"Enter Array Elements:\n";
	for(int i=0;i<5;i++){
	
		std::cin>>iarr[i];
	}
	for(int i=0;i<5;i++){
	
		if(iarr[i]%2==0){
		
			std::cout<<iarr[i]<<std::endl;
		}
	}
	return 0;
}
