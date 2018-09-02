#include<iostream>
using namespace std;
class Array
{
private:
 int size;
 int *arr;

public:
 Array();
 Array(int);
 Array(Array&);
 void Display();
 ~Array(); 
};

Array::Array()
{
  size = 5;
  arr = new int[size];
  for(int i=0;i<size;i++){
    arr[i]=0;
  }
}
Array::Array(int s){
  size = s;
  arr = new int[size];
  for(int i=0;i<size;i++){
    arr[i]=0;
  }
}

Array::Array(Array &s){
  size = s.size;
  arr = new int[size];
  for(int i=0;i<size;i++){
    arr[i] =s.arr[i];
  }
}

void Array::Display(){

  for(int i=0;i<size;i++){
   cout<<arr[i]<<endl;
  
  }
}

Array::~Array(){

  delete arr;
  arr =NULL;
}


int main(){
 
 Array a1(5);
 a1.Display();
 Array a2(a1);
 a2.Display();

 return 0;
}
