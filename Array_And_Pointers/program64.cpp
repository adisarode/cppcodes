//Pointer to Pointer.
#include<iostream>

using namespace std;

int main() {

int x = 10;
int *iptr1 = &x;
int *iptr2 = iptr1;
int **iptr3 = &iptr1;

cout<<x<<endl;
cout<<*iptr1<<endl;
cout<<*iptr2<<endl;
cout<<**iptr3<<endl;

return 0;

}
