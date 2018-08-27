#include<iostream>
using namespace std;
void Accept(int arr[][3]);
void Display(int arr[][3]);
void Multiply(int a[][3],int b[][3]);

int main(){
   
  int a[3][3],b[3][3];
  
  cout<<"Enter the elements of matrix A ";
  Accept(a);
  cout<<"Enter the elements of matrix B ";
  Accept(b);
  Multiply(a,b);
  return 0;
}



void Accept(int arr[][3]){

   	for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
		   cin>>arr[i][j];
		}
	}
}

void Display(int arr[][3]){

	for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
		   cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void Multiply(int a[3][3],int b[3][3]){
  
  int c[3][3]={0};
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      for(int k=0;k<3;k++){
        c[i][j]=c[i][j]+a[j][k]*b[k][j];
      }
    }
  }

  cout<<"After Multiplication resultant matrix is :"<<endl;
  Display(c);
}