#include<iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
         Complex (int r=0,int i=0){
            real=r;
            imag=i;
         }
         Complex add(Complex c){
            return Complex(real+c.real,imag+c.imag);
         }
         Complex add(int x){
            return Complex(real+x,imag);
         }
         void display(){
            cout<<real<<" + "<<imag<<"i"<<endl;
         }
};
int main(){
    Complex c1(3,4);
    Complex c2(5,6);
    Complex result1=c1.add(c2);
    Complex result2=c1.add(10);
    result1.display();
    result2.display();
    return 0;
}