#include <iostream>
using namespace std;

int main(){

 int num,i,flag=0;
 cout<<"Enter any number"<<endl;
 cin>>num;
 i=num/2;
 while(i>=2){
   if(num%i==0){
      flag++;
      break;
     }   
   i--;
 }

	if(flag>0){
	  cout<<"number is not prime "<<endl;
	}else{
	 cout<<"number is prime "<<endl;
	}
  return 0;
}
