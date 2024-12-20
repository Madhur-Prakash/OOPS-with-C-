#include <iostream>
using namespace std;
class complex{
    public:
    int real;
    int imag;
    complex(int tempR=0,int tempI=0){
        real=tempR;
        imag=tempI;
    }
    complex add(complex c1,complex c2){
    complex temp;
    temp.real=c1.real+c2.real; 
    temp.imag=c1.imag+c2.imag;
    return temp;}

    complex sub(complex c1,complex c2){
    complex temp;
    temp.real=c1.real-c2.real; 
    temp.imag=c1.imag-c2.imag;
    return temp;}

    complex product(complex c1,complex c2){
    complex temp;
    temp.real=c1.real*c2.real; 
    temp.imag=c1.imag*c2.imag;
    return temp;}   

    complex div(complex c1,complex c2){
    complex temp;
    temp.real=c1.real/c2.real; 
    temp.imag=c1.imag/c2.imag;
    return temp;}

    complex ModDiv(complex c1,complex c2){
    complex temp;
    temp.real=c1.real%c2.real; 
    temp.imag=c1.imag%c2.imag;
    return temp;}};    

int main() {
int a,b,c,d;
cout<<"Enter the real part of number 1:-";
cin>>a;
cout<<"Enter the imagnary part of number 1:-";
cin>>b;
cout<<"Enter the real part of number 2:-";
cin>>c;
cout<<"Enter the imagnary part of number 2:-";
cin>>d;
complex c1(a,b);
complex c2(c,d);
complex c3;
c3=c3.add(c1,c2);
cout<<"sum:-("<<c3.real<<" + "<<c3.imag<<"i)"<<endl;
c3=c3.sub(c1,c2);
cout<<"difference:(-"<<c3.real<<" + "<<c3.imag<<"i)"<<endl;
c3=c3.product(c1,c2);
cout<<"product:-("<<c3.real<<" + "<<c3.imag<<"i)"<<endl;
c3=c3.div(c1,c2);
cout<<"division:-("<<c3.real<<" + "<<c3.imag<<"i)"<<endl;
c3=c3.ModDiv(c1,c2);
cout<<"modular division:-("<<c3.real<<" + "<<c3.imag<<"i)"<<endl;
}