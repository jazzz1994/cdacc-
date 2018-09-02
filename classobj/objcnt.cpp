#include<iostream>
#include<cmath>
using namespace std;

class Complex{
 
 private:
  int real;
  int img;
  static int cnt;
 public:
  Complex();
  Complex(int,int);
  int  realgetter();
  int  imggetter();
  void realsetter(int);
  void imgsetter(int);
  void display();
  void count();
};

int Complex::cnt;
Complex::Complex(){

   real = 0;
   img  = 0;
   cnt++;
}

Complex::Complex(int real,int img){
 
 this->real = real;
 this->img  = img;
 cnt++;
   
}

int Complex::realgetter(){

   return real;
}
int Complex::imggetter(){

   return img;
}
void Complex::realsetter(int r){

   real = r;
}
void Complex::imgsetter(int i){

   img=i;
}
void Complex::count(){
  cout<<cnt<<endl;
}
void Complex::display(){

   char ch = (img<0)?'-':'+'; 
   cout<<real<<ch<<abs(img)<<"i"<<endl;
}

int main(){
  
  Complex c(10,20),c1(5,10),c2;
  int x= c.realgetter();
  c.display();
  cout<<x<<endl;
  c.realsetter(50);
  c.display();
  c.count();
  return 0;
}
