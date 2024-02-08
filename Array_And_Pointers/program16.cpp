#include<iostream>

int main() {

	int size;
	std::cout<<"Enter Array size:\n";
	std::cin>>size;

	int arr[size];

	std::cout<<"Enter Array Elements:\n";
	for(int i=0;i<size;i++){
	
		std::cin>>arr[i];
	} 

	int flag=0;
	for(int i=0;i<size;i++) {
	
		if(arr[i]%4==0 && arr[i]%5==0)
		
			flag=1;	
	}
	if(flag==1)
		std::cout<<"Found\n";
	else
		std::cout<<"Not Found\n";

	return 0;
}
