//Array of character pointer.
#include<iostream>

using namespace std;

int main() {

	char arr1[3] = {'A','B','C'};
	char arr2[3] = {'D','E','F'};
	char arr3[3] = {'G','H','I'};

	char* cparr[3] = {arr1,arr2,arr3};

	cout<<sizeof(cparr)<<endl;

	cparr[0]=arr1+1;
	cparr[1]=arr2+2;
	cparr[2]=arr3;

	cout<<*(cparr[0])<<endl;//B
	cout<<*(cparr[1])<<endl;//F
	cout<<*(cparr[2])<<endl;//G

	return 0;

}
