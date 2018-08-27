#include <iostream>
using namespace std;

int main(){

    int num,i,a=0,b=1,c=0;
	cout<<"Enter the number you want to display";
	cin>>num;
	cout<<a<<"  "<<b<<"  ";
	
	for(i=1;i<=num-2;i++){
       c=a+b;
       cout<<c<<"  ";
       a=b;
       b=c;
       
	}
}