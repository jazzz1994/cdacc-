#include<iostream>
using namespace std;
void Accept(int arr[][3]);
void Display(int arr[][3]);
void Transpose(int arr[][3]);

int main(){
   
   int arr[3][3];  
   Accept(arr);
   Display(arr);
   Transpose(arr);
   Display(arr);
   return 0;
}

void Transpose(int arr[][3]){

	  int tra[3][3];

      for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
		   tra[j][i]=arr[i][j];
		}
	}

    cout<<"transpose of a matrix is ";
	Display(tra);
}

void Accept(int arr[][3]){
    
    cout<<"Enter the elements of matrix";

   	for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
		   cin>>arr[i][j];
		}
	}
}

void Display(int arr[][3]){

    cout<<"Elements of matrix are"<<endl<<endl;

	for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
		   cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}