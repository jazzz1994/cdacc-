#include <iostream>
using namespace std;


int main(){

int i,j,k,l;


for(i=1;i<=5;i++)
{
      for(j=1;j<=5-i+1;j++){
	   cout<<j;
	 }
      for(k=3;k<=2*i-1;k++){
        cout<<" ";
       }
      for(l=4-i+1;l>=1;l--){ 
           cout<<l;
          if(l==5){
            cout<<"\b";
                 }
       
     }
  cout<<endl;
}


return 0;
}
