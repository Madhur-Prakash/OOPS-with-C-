#include <iostream>
using namespace std;

class area{
public:
    int l, b, r, h;
    void area1(int l, int b){
        int area = l * b;
        cout << "area of rectangle having length "<<l<<" and breadth "<<b<<":-" << area << endl;}

    void area1(int r){
        int area = 3.14 * r * r;
        cout << "area of circle of radius "<<r<<":-" << area << endl;}

    void area1(float l, int h){
        int area = 0.5 * 1 * h;
        cout << "area of triangle having length "<<l<<" and height"<<h<<":-" << area << endl;}};

int main(){
    area obj1;
    obj1.area1(2, 5);
    obj1.area1(2);
    obj1.area1(3, 5);
}