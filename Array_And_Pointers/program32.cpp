#include<iostream>

using namespace std;

int main() {

	char carr[] = {'A','B','C','D'};

	char *cptr1 = &carr[2];
	char *cptr2 = &carr[3];

	cout<<*cptr1<<endl;
	cout<<*cptr2<<endl;

	cout<<*(cptr1+2)<<endl;//garbage value or segmentation fault
	cout<<*(cptr2+1)<<endl;//garbage value or segmentation fault

	return 0;
}
