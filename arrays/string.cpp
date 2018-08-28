#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int Accept(char str[]);
void Display(char str[]);

int main(){

 char str[20],ch,temp;
 int count = 0;
 cout<<"Enter The string"<<endl;
 int len = Accept(str);
 cout<<"Enter the character to find in "<<endl;
 cin>>ch;
  for(int i=0;i<len;i++){
         if(str[i]==ch)
          count++;      
  }
 cout<<"character count :"<<count<<endl;

 return 0;
}


int Accept(char str[]){

  
    cin.getline(str,20); 
    int len = strlen(str);
    return len;
 
}


