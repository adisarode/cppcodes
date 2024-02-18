/* WAP to find the given element from the array Take array size and array elements from the user.

Ip: enter array: 10 12 13 14 15 16
Ip:enter Element:15
Op: 15 is present
*/
#include<iostream>

using namespace std;

int main() {

	int size;
	cout<<"Enter Array size: ";
	cin>>size;
	int arr[size];

	cout<<"Enter Array Element: ";
	for(int i=0;i<size;i++) {

		cin>>arr[i];
	}
	int flag=0;
	int search;
	cout<<"Enter search Element: ";
	cin>>search;
	
	for(int i=0;i<size;i++) {
	
		if(arr[i]==search) { 

			flag=1;	
		}
	}
	if(flag==1)
		cout<<search<<" is present"<<endl;	
	else
		cout<<search<<" is not present"<<endl;
	 
	return 0;
}
