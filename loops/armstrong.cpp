#include <iostream>
using namespace std;
int main()
{
    int num,rem,sum=0,mul=1,dig=0;
    cout<<"Enter any number";
    cin>>num;
    int temp1= num,temp2=num;
    
    while(temp1>0){
     temp1=temp1/10;
      dig++;
   }
    cout<<dig<<endl;

    while(num>0){
    	rem  = num%10;
       for(int i=0;i<dig;i++){
          mul=mul*rem;
        }
        sum=sum+mul;
        mul=1;
        num  = num/10; 
    }
  
    if(temp2==sum){
    	cout<<"number is an anagram"<<endl;
    }
    else{
    	cout<<"number is not an anagram"<<endl;
    }
return 0;
}
