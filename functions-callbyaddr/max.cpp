#include <iostream>
using namespace std;

int* max(int *,int *);
int main(){
	int a,b;
	cout<<"Enter two number";
	cin>>a>>b;
	cout<<max(&a,&b)<<endl;

   return 0;
}

int* max(int *a,int *b){

   if(*a>*b){
   	return a;
   }else{
   	return b;
   }
    
}