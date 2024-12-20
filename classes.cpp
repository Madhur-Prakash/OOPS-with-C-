#include<iostream>
#include<string.h>
using namespace std;

class employee{
    public:
    int employee_id;
    string employee_name;
    string employee_department;
};

class work : public employee{
    public:
    int hours_worked;
    int task[5];

    work(int t1,int t2,int t3,int t4,int t5){
        task[0]=t1;
        task[1]=t2;
        task[2]=t3;
        task[3]=t4;
        task[4]=t5;}};

class salary : public work{
    public:
    int rate[5];
    void rate(){
        int r1,r2,r3,r4,r5;
        rate[0]=r1;
        rate[1]=r2;
        rate[2]=r3;
        rate[3]=r4;
        rate[4]=r5;}
    void total_salary(){
        int total=0;
        for (int i=0;i<5;i++){
            total=total+(rate[i]*task[i])}}};

int main(){
    employee e1;
    int task[5];
    int rate[5];
    cout<<"Enter the employee ID:-";
    cin>>e1.employee_id;
    cout<<"Enter the employee name:-";
    cin>>e1.employee_name;
    cout<<"Enter the employee department:-";
    cin>>e1.employee_department;
}