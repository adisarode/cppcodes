//Pointer to an Array
#include<iostream>

using namespace std;

int main() {

	char carr1[3] = {'A','B','c'};
	char carr2[3] = {'D','E','F'};

	char *ptr1 = &carr1[1];
	char *ptr2 = carr1;
	char (*ptr3)[3] = &carr1;

	cout<<**ptr3<<endl;//A
/*	ptr3++;
	cout<<**ptr3<<endl;//D

	cout<<*ptr1<<endl;//B
	ptr1++;
	cout<<*ptr1<<endl;//C
*/
	cout<<*(*ptr3+2)<<endl;//c

	return 0;
}
