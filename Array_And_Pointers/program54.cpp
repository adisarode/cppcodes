//2D Array
#include<iostream>

using namespace std;

int main() {

	int arr1[3][3] = {1,2,3,4,5,6,7,8,9};
	/*
	  Represntation-
	  1 2 3 
	  4 5 6
	  7 8 9
	*/
	int arr2[3][3] = {1,2,3,4,5};

	/*
	  Representation-
	  1 2 3
	  4 5 0 
	  0 0 0
	*/

	int arr3[][3] = {1,2,3,4,5,6,7,8,9};
	/*
	  Representation-
	  1 2 3 
	  4 5 6
	  7 8 9
	*/

//	int arr4[][] = {1,2,3,4,5,6,7,8,9};//multidimentional array must have bounds 

//	int arr5[2][4] = {1,2,3,4,5,6,7,8,9};//error: too many intializers

//	int arr6[3][] = {1,2,3,4,5,6,7,8,9};//error: multidimentional array must have bounds

	int arr7[][3] = {{1,2,3},{4,5},{6}};
	/*
	 Representation-
	 1 2 3
	 4 5 0 
	 6 0 0
	 */

//	int arr8[][3] = {{1,2,3,4},{5,6}};//error: too many initializers

	return 0;

}
