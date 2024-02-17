#include<iostream>

using namespace std;

int main() {

int x = 10;
int y = 20;

cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;

int *iptr1 = &x;
int *iptr2 = &y;

cout<<*iptr1<<endl;

*iptr2 = *iptr1;

cout<<*iptr2<<endl;

return 0;
}
