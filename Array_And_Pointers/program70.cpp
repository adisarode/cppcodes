//3D Array
#include<iostream>

using namespace std;

int main() {

	int arr[][3][4] = {{10,20,30,40,50,60,70,80,90,100,110,120},{130,140,150,160,170,180,190,200,210,220,230,240}};

	cout<<*(*(*(arr+0)+0)+0)<<endl;//10
	cout<<*(*(*(arr+0)+0)+1)<<endl;//20
	cout<<*(*(*(arr+0)+0)+2)<<endl;//30
	cout<<*(*(*(arr+0)+0)+3)<<endl;//40

	cout<<*(*(*(arr+0)+1)+0)<<endl;//50
	cout<<*(*(*(arr+0)+1)+1)<<endl;//60
	cout<<*(*(*(arr+0)+1)+2)<<endl;//70
	cout<<*(*(*(arr+0)+1)+3)<<endl;//80

	cout<<*(*(*(arr+0)+2)+0)<<endl;//90
	cout<<*(*(*(arr+0)+2)+1)<<endl;//100
	cout<<*(*(*(arr+0)+2)+2)<<endl;//110
	cout<<*(*(*(arr+0)+2)+3)<<endl;//120

	cout<<*(*(*(arr+1)+0)+0)<<endl;//130
	cout<<*(*(*(arr+1)+0)+1)<<endl;//140
	cout<<*(*(*(arr+1)+0)+2)<<endl;//150
	cout<<*(*(*(arr+1)+0)+3)<<endl;//160

	cout<<*(*(*(arr+1)+1)+0)<<endl;//170
	cout<<*(*(*(arr+1)+1)+1)<<endl;//180
	cout<<*(*(*(arr+1)+1)+2)<<endl;//190
	cout<<*(*(*(arr+1)+1)+3)<<endl;//200

	cout<<*(*(*(arr+1)+2)+0)<<endl;//210
	cout<<*(*(*(arr+1)+2)+1)<<endl;//220
	cout<<*(*(*(arr+1)+2)+2)<<endl;//230
	cout<<*(*(*(arr+1)+2)+3)<<endl;//240

	for(int i=0;i<2;i++) {
	
		cout<<"plane: "<<i<<endl;
		for(int j=0;j<3;j++) {
	
				
			for(int k=0;k<4;k++) {

				cout<<arr[i][j][k]<<" ";
			}
			cout<<endl;
		}
	
	}
	return 0;
	
}
