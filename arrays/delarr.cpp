#include <iostream>
using namespace std;

int main()
{
	int arr[5],pos;
	cout<<"Enter 5 elements of array "<<endl;
	for(int i=0;i<5;i++){
         cin>>arr[i];
    }
    cout<<"Enter the position of element you want to Delete ";
    cin>>pos;
    arr[pos-1]=0;


     cout<<"Elements of new array are ";
     for(int i=0;i<5;i++){
     	cout<<arr[i]<<"  ";
     } 

    cout<<endl;
	return 0;
}
