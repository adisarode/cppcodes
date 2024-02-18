//Pointer to an Array of Array
#include<iostream>

using namespace std;

int main() {

	int arr1[4] = {10,20,30,40};
	int arr2[4] = {50,60,70,80};
	int arr3[4] = {90,100,110,120};

	int (*iparr[])[4] = {&arr1,&arr2,&arr3};
/*
	cout<<(*iparr[0])[0]<<endl;
	cout<<(*iparr[0])[1]<<endl;
	cout<<(*iparr[0])[2]<<endl;
	cout<<(*iparr[0])[3]<<endl;

	cout<<(*iparr[1])[0]<<endl;
	cout<<(*iparr[1])[1]<<endl;
	cout<<(*iparr[1])[2]<<endl;
	cout<<(*iparr[1])[3]<<endl;

	cout<<(*iparr[2])[0]<<endl;
	cout<<(*iparr[2])[1]<<endl;
	cout<<(*iparr[2])[2]<<endl;
	cout<<(*iparr[2])[3]<<endl;
*/
	for(int i=0;i<3;i++) {
	
		for(int j=0;j<4;j++) {
		
			cout<<(*iparr[i])[j]<<endl;
		}
	}
	return 0;
}
