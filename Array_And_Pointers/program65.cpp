//Pointer to Pointer.
#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int *ptr1 = &x;
	int **ptr2 = &ptr1;
	int **ptr3 = &ptr1;//OR ptr2;
	int ***ptr4 = &ptr2;

	cout<<"x= "<<x<<endl;
	cout<<"value at ptr1= "<<*ptr1<<endl;
	cout<<"value at ptr2= "<<**ptr2<<endl;
	cout<<"value at ptr3= "<<**ptr3<<endl;
	cout<<"value at ptr4= "<<***ptr4<<endl;
	
	return 0;

}
