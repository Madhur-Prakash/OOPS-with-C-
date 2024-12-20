#include<iostream>
using namespace std;
class object{
    static int count;
    public:
    int obj;
    object(){
        count++;
    }
   static int getcount(){
        return count;
    }
};
int object::count=0;
int main(){
    object o1;
    object o2;
    object o3;
    cout<<"No of objects:"<<object::getcount();
}