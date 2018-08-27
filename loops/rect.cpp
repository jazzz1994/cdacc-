#include<iostream>
using namespace std;
int main()()
{
	int i,j,a,b;
	cout<<"enter length and breath of rectangle" <<endl;
	cin>>i>>j;
	for(a=1;a<=i;a++){
		  for(b=1;b<=j;b++){
                           if(a==1||a==i||b==1||b==j){
                            cout<<"*";
                             }
                           else{
                           cout<<" "; 
                                }
                         
                  }
            cout<<"\n";
	}
        
  return 0;
 }

