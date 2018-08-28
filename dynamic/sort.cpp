#include<iostream>
#include<string.h>
#include<stdio.h>


using namespace std;

int main(){

   int i,l,j,n;
   char **s, temp[20],*t;
   cout<<"Enter the no of String you want to enter"<<endl;
   cin>>n;
   s=(char**)malloc(sizeof(char*)*n);

   for(i=0;i<n;i++){
   	cout<<"Enter the strings"<<endl;
   	cin.get(temp,20);
   	l=strlen(temp);
   	s[i]=(char*)malloc(sizeof(char)*l+1);
   	strcpy(s[i],temp);
   }

   for(i=0;i<n;i++){
   	for(j=0;j<n;j++){
   		if(strcmp(s[i],s[j+1])>0){
           t=s[j];
           s[j]=s[j+1];
           s[j+1]=t;

   		}
   	}
   }

   for(i=0;i<n;i++){
   	cout<<s[i];
   }

   for(i=0;i<n;i++){
   	free(s[i]);
   	s[i]=NULL;
   }

   free(s);
   s=NULL;
   cout<<"endl";


   return 0;

}