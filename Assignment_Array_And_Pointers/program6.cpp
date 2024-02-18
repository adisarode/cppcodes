/*WAP to swap values of two numbers using pointer.
  (Hint:Use de-referencing of pointers)
*/
#include<iostream>

using namespace std;

int main() {

	int x = 10;

	int y = 20;

	int *ptr1 = &x;
	int *ptr2 = &y;
	int temp = *ptr1;

	*ptr1 = *ptr2;
	*ptr2 = temp;
	
	cout<<"x= "<<x<<endl;//20
	cout<<"y= "<<y<<endl;//10

	return 0;
}
