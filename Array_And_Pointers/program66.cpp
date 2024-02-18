//Pointer to an Array.
#include<iostream>

using namespace std;

int main() {

	int arr1[3] = {10,20,30};
	int arr2[3] = {40,50,60};

//	int* iparr[] = {&arr1,&arr2};//This is a pointer to an array of arrays, but you have not written it in the right way. The below line is right.
        int (*iptr[])[3] = {&arr1,&arr2};
 	int (*ptr1)[3] = &arr1;//Pointer to an Array
        int (*ptr2)[3] = &arr2;//Pointer to an Array

	cout<<*ptr1<<endl;
	cout<<*ptr2<<endl;

	cout<<**ptr1<<endl;//10
	cout<<*(*ptr1+1)<<endl;//20
	cout<<**ptr2<<endl;//40

	cout<<(*iptr[0])[0]<<endl;
	cout<<(*iptr[0])[1]<<endl;
	cout<<(*iptr[0])[2]<<endl;
	cout<<(*iptr[1])[0]<<endl;
	cout<<(*iptr[1])[1]<<endl;
	cout<<(*iptr[1])[2]<<endl;

	cout<<*ptr1<<endl;
	cout<<*ptr2<<endl;
	cout<<*iptr<<endl;
	cout<<*iptr[0]<<endl;
	cout<<*iptr[1]<<endl;

	return 0;
}
