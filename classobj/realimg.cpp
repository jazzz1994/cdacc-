#include<iostream>
#include<cmath>
using namespace std;

class Complex{
 
 private:
  int real;
  int img;
 public:

  Complex();
  Complex(int,int);
  int  realgetter();
  int  imggetter();
  void realsetter(int);
  void imgsetter(int);
  void display();

};

Complex::Complex(){

   real = 0;
   img  = 0;
}

Complex::Complex(int real,int img){
 
 this->real = real;
 this->img  = img;
   
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

void Complex::display(){

   char ch = (img<0)?'-':'+'; 
   cout<<real<<ch<<abs(img)<<"i"<<endl;
}

int main(){
  
  Complex c(10,20);
  int x= c.realgetter();
  c.display()
  cout<<x<<endl;
  c.realsetter(50);
  c.display();


}
