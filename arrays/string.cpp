#include<iostream>
#include<string.h>

using namespace std;

int Accept(char str[]);
void Display(char str[]);

int main(){

 char str[20];
 int count = 0;
 cout<<"Enter The string"<<endl;
 int len = Accept(str);
 
  for(int i=0;i<len-1;i++){
       for(int j=i+1;j<len;j++){
            if(str[i]==str[j]){
                 count++;    
                 }
              }
         if(count>1){
          cout<<str[i]<<"number of accurence is"<<count;
          count=0; 
            }
         else{
           cout<<str[i]<<" no of accurence: "<<1;
            } 
        }
         
  //Display(str);
  return 0;      
  }
 




int Accept(char str[]){

  int len = strlen(str);
  for(int i=0;i<len;i++){
    cin>>str[i];
   }
   
 return len;

}


void Display(char str[]){

  int len = strlen(str);
  for(int i=0;i<len;i++){
    cout<<str[i];
   }

}
