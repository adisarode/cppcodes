//Void pointer 
#include<iostream>

using namespace std;

int main() {

	int x = 10;
	
	int *iptr = &x;
	void *vptr = &x;

	cout<<iptr<<endl;
	cout<<vptr<<endl;

	cout<<*iptr<<endl;
//	cout<<*vptr<<endl; // you cannnot dereference void pointer. If dereference must be done, typecast it.
	cout<<*static_cast<int*>(vptr)<<endl;//void pointer typecast into integer pointer.

	return 0;
}
