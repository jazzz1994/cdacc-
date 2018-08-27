#include <iostream>
using namespace std;
void armstrong()
{
	int num,rem,sum,cube;
    cout<<"Enter any number";
    cin>>num;
    int temp = num ;
    while(num>0){
    	rem  = num%10;
        cube = rem*rem*rem;
        sum  = sum+cube;
        num  = num/10; 
    }
  
    if(temp==sum){
    	cout<<"number is an anagram"<<endl;
    }
    else{
    	cout<<"number is not an anagram"<<endl;
    }
}