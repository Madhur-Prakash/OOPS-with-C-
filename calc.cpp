#include <iostream>
using namespace std;

class fraction{
    public:
    int num1,num2;
    void set(int x,int y){num1=x;num2=y;};
    void addition();
    void subraction();
    void multiplication();
    void modular_div();
    void div();};

void fraction::addition(){
    int sum=num1+num2;
    cout<<"sum:"<<sum<<endl;}

void fraction::subraction(){
    int sub=num1-num2;
    cout<<"subraction:"<<sub<<endl;}

void fraction::multiplication(){
    int mul=num1*num2;
    cout<<"multiplication:"<<mul<<endl;}

void fraction::modular_div(){
    int d=num1%num2;
    cout<<"modular divison:"<<d<<endl;}

void fraction::div(){
    int c=num1/num2;
    cout<<"division:"<<c<<endl;}

int main(){
    int x,y;
    cout<<"enter the value of numNumerator and numDenominator:-";
    cin>>x>>y;
    fraction fac;
    fac.set(x,y);
    fac.addition();
    fac.subraction();
    fac.multiplication();
    fac.modular_div();
    fac.div();}