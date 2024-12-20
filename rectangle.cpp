#include <iostream> 
using namespace std;
class rectangle{
    public:
    float l,b;
    void set(float x,float y){l=x;b=y;};
    void area();
    void perimeter();};

void rectangle::perimeter(){
    int perimeter = 2*(l+b);
    cout<<"Perimeter of rectangle of l="<<l<<",b="<<b<<" is "<<perimeter<<endl;}
void rectangle::area(){
    int area=l*b;
    cout<<"Area of rectangle of l="<<l<<",b="<<b<<" is "<<area<<endl;}

int main(){
    int a,b;
    cout<<"enter the value of l and b:-";
    cin>>a;
    cin>>b;
    rectangle rect1;
    rect1.set(a,b);
    rect1.area();
    rect1.perimeter();}