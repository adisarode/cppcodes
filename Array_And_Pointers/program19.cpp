//Comparison of Array
#include<iostream>

int main() {

	int arr1[3]={10,20,30};
	std::cout<<"Array 1 Elements Are:\n";
	for(int i=0;i<3;i++) {
	
		std::cout<<arr1[i]<<std::endl;
	}

	std::cout<<"Enter Array 2 Elements: \n";
	int arr2[3];
	for(int i=0;i<3;i++) {
	
		std::cin>>arr2[i];
	}
	std::cout<<"Array 2 Elements Are:\n";
	for(int i=0;i<3;i++) {
	
		std::cout<<arr2[i]<<std::endl;
	}
	if(arr1[0] == arr2[0] && arr1[1] == arr2[1] && arr1[2] == arr2[2] )

			std::cout<<"Both Arrays are equal\n";
	else 
			std::cout<<"Both Arrays are not equal\n";	

}
