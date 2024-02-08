//Assigning Array to an Array
#include<iostream>

int main() {
	
	int arr1[3];

	arr1[0]=10;
	arr1[1]=20;
	arr1[2]=30;

	std::cout<<"Array 1\n";
	for(int i=0;i<3;i++){
	
		std::cout<<arr1[i]<<std::endl;
	}

	int arr2[3];

	for(int i=0;i<3;i++) {
	
		arr2[i]=arr1[i];
	}

	std::cout<<std::endl;

	std::cout<<"Array 2\n";
	for(int i=0;i<3;i++) {
	
		std::cout<<arr2[i]<<std::endl;
	}
	return 0;
}
