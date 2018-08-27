#include<iostream>
using namespace std;
void Accept(int arr[][3]);
void Display(int arr[][3]);
void Transpose(int arr[][3]);
void Addition(int a[][3],int b[][3]);

int main(){
   
   int arr[3][3],a[3][3],b[3][3],i;  
   cout<<"press 1 to transpose the matrix"<<endl;
   cout<<"press 2 to add two  matrix"<<endl;
   cin>>i;
   switch(i){
    case 1:
      Transpose(arr);
      break;
    case 2:  
      Addition(a,b);
      break;
    default:
      cout<<"invalid input";  
   }
   return 0;
}

void Transpose(int arr[][3]){

	     int tra[3][3];
       cout<<"Enter the ELements of matrix"<<endl;
       Accept(arr);
       for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
		   tra[j][i]=arr[i][j];
		}
	}

  cout<<"transpose of a matrix is "<<endl;
	Display(tra);
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

void Addition(int a[][3],int b[][3]){
  
  int c[3][3];
  cout<<"Enter the ELements of matrix A :";
  Accept(a);
  cout<<"Enter the ELements of matrix B :";
  Accept(b);

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
         
         c[i][j]=a[i][j]+b[i][j];
    }
  } 

 cout<<"Addition of two matrix is :"<<endl;
  Display(c);
}