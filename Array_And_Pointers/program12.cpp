#include<iostream>

int main() {

	int arr[5];
	
	std::cout<<"Enter array elements:\n";

	for(int i=0;i<5;i++){
	
		std::cin>>arr[i];
	}

	std::cout<<"Array elements Are:\n";
	for(int i=0;i<5;i++){
	
		std::cout<<arr[i]<<std::endl;
	}

	return 0; 
}
