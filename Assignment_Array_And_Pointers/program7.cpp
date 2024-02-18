//Write Output and draw a good diagram for the code.

#include<iostream>

using namespace std;

int main() {

int arr[] = {10,20,30,40,50,60};

int *ptr1 = &arr[0];
int *ptr2 = &arr[4];

ptr1++;
ptr2--;

cout<<*ptr1<<endl;//20
cout<<*ptr2<<endl;//40

cout<<ptr1-ptr2<<endl;//-2
return 0;
}
