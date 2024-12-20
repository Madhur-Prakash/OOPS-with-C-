#include<stdio.h>
int check(int h,float c,int t);
int main(){
int h,t;
float c;
printf("enter the hardness\n");
scanf("%d", &h);
printf("enter the carbon content\n");
scanf("%f",&c);
printf("enter the tensile strength\n");
scanf("%d",&t);
check(h,c,t);}


int check(int h,float c,int t){
    int grade;
if(h>50&&c<0.7&&t>5600){
    grade=10;}
else if(h>50&&c<0.7){
    grade=9;}
else if(c<0.7&&t>5600){
    grade=8;}
else if(h>50&&t>5600){
    grade=7;}
else if(h>50||c<0.7||t>5600){
    grade=6;}
else{grade=5;}    
printf("grade of the steel is %d",grade);
}

