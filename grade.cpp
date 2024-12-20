#include<iostream>
using namespace std ;
int main(){
int m;
cout<<"enter the marks:-";
cin>> m;
if(m<=100 && m>90){
    cout<<("You got A");
}else if(m<=90 && m>80){
    cout<<("You got B");
}else if(m<=80 && m>70){
    cout<<("You got C");
}else if(m<=70 && m>60){
    cout<<("You got D");
}else if(m<=60 && m>50){
    cout<<("You got E");
}else if(m<=50){
    cout<<("Better luck next time");}}
