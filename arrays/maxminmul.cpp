#include <iostream>
using namespace std;

void accept(int []);
void display(int []);
int min(int []);
int max(int []);
int multiply(int []);


int main(){
	  int arr[5];
    accept(arr);
    cout<<"maximum value is "<< max(arr)<<endl;
    cout<<"minimum value is "<<min(arr)<<endl;
    multiply(arr);
}

void accept(int arr[]){
	cout<<"Enter any five integer"<<endl;
	 for(int i=0;i<5;i++){
    	cin>>arr[i];
    }
}


int max(int arr[]){
  
  int max;
  max = arr[0];

  for(int i=0;i<5;i++){
    if(max<arr[i]){
    	max = arr[i];
    }
  }

  return max;
}

int min(int arr[]){

	int min;
	min = arr[0];

	for(int i=0;i<5;i++){
		if(min>arr[i]){
		 min =arr[i];
		}
	}
	return min;
}


int multiply(int arr[]){
  
   int mul[5];
  for(int i=0;i<5;i++){
     mul[i] = 5*arr[i];

  }
  display(mul);
}

void display(int arr[]){

  cout<<"Elements of array are";
   for(int i=0;i<5;i++){
    cout<<endl<<arr[i]<<"\t";
   }
   cout<<endl;

}