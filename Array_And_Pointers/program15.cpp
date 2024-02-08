#include<iostream>

int main() {

	int size;
	std::cout<<"Enter Array size: \n";
	std::cin>>size;

	int arr[size];

	std::cout<<"Enter Array Elements: \n";
	for(int i=0;i<size;i++){
	
		std::cin>>arr[i];
	}

	int search;
	std::cout<<"Enter Search Element:\n";
	std::cin>>search;
	int flag=0;

	for(int i=0;i<size;i++){
	
		if(search == arr[i]){
		
			flag=1;
			break;
		}
		
	}
	if(flag==1)
		std::cout<<"Element found\n";
	else
		std::cout<<"Element Not found\n";

	return 0;
}
