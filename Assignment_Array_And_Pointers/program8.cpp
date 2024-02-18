//Write output and draw a good diagram for the code.
#include<iostream>

using namespace std;

int main() {

	char arr[] = {'A','B','C','D','E'};

	char *ptr=&arr[2];
	(*ptr)++;//D
	ptr=ptr+2;

	cout<<*ptr<<endl;//E
	
	for(int i=0;i<5;i++) {
	
		cout<<arr[i]<<endl;
	}
	return 0;
}
