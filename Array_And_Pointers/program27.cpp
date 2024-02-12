//Addition of pointer and integer
#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int y = 20;

	int *ptr = &x;

	cout<<*ptr<<endl;      // 10 
	cout<<*(ptr+1)<<endl;  //20

	return 0;
}
