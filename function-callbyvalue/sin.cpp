#include <iostream>
using namespace std;
float fact(int);
float pow(int,int);
void sin(){

  float x,rad;
  float sinx;
  cout<<"enter the value of angle"<<endl;
  cin>>x;
  rad=((3.142)/180)*x;
  cout<<rad<<endl;
  sinx = x-(pow(x,3)/fact(3))+(pow(x,5)/fact(5))-(pow(x,7)/fact(7))+(pow(x,9)/fact(9));
  cout<<sinx<<endl;

 	
 }
float fact(int x)
{
  float fact=1; 	
  if(x==0){
  	return 1;
  }
  
  if(x>0){
  for(int i=1;i<=x;i++){
      fact = fact*i;
   }
      return fact;
  }
  

}

float pow(int num,int p){

   float pow = 1;
   for(int i=1;i<=p;i++){
   	 pow=pow*num;
   }
   
  return pow; 
}

