#include<iostream>
using namespace std;
void Accept(int arr[]);
void Display(int arr[]);

int main(){
   
     int arr[5]={0},pos,element;
     
     cout<<"Enter the postion where you want to store value: "<<endl;
     cin>>pos;
     cout<<"Enter the element you want to enter: "<<endl;
     cin>>element;
     arr[pos-1] = element;
	 
	 cout<<"Elements of an array are "<<endl;
      
     for(int i=0;i<5;i++){
          cout<<arr[i]<<"    ";
      }

      return 0;

}