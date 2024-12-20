#include<iostream>
using namespace std;
typedef struct student{
    string name;
    int age;
    int roll_no;
} stu;
void students(stu s[], int n);
int main(){
    int n;
    cout<<("enter the No. of students:-");
    cin>>n;
    stu s[n];
    students(s,n);
    cout<<::endl;
    cout<<"details of student having roll no 2:-"<<::endl;
    cout<<"roll no:-"<<s[1].roll_no<<::endl;
    cout<<"name:-"<<s[1].name<<::endl;
    cout<<"age"<<s[1].age<<::endl;}
void students(stu s[],int n){
    int i;
    for(i=0;i<n;i++){
        s[i].roll_no = i+1;
        cout<<"enter the details of student having roll no:-"<<s[i].roll_no<<::endl;
        cout<<("enter the name of student:-");
        cin>>s[i].name;
        cout<<("enter the age:-");
        cin>>s[i].age;
        cout<<::endl;}        
        for(i=0;i<n;i++){
        cout<<"details of students having roll no:-"<< s[i].roll_no<<::endl;
        cout<<"roll no:-"<<s[i].roll_no<<::endl;
        cout<<"name:-"<<s[i].name<<::endl;
        cout<<"age"<<s[i].age<<::endl;
        cout<<::endl;}}
