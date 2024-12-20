#include <iostream>
using namespace std;
class Length {
public:
    int feet;
    int inches;
    Length(int f = 0, int i = 0) : feet(f), inches(i) {}
// Overload + operator to add two lengths
    Length operator+(const Length& l) const {
        int totalInches = inches + l.inches + 12 * (feet + l.feet);
        int newFeet = totalInches / 12;
        int newInches = totalInches % 12;
        return Length(newFeet, newInches);}
// Overload < operator to compare two lengths
    bool operator<(const Length& l) const {
        if (feet < l.feet) return true;
        if (feet == l.feet && inches < l.inches) return true;
        return false;}
// Overload == operator to compare two lengths
    bool operator==(const Length& l) const {
        return feet == l.feet && inches == l.inches;}
// Overload *= operator to multiply length with an integer
    Length operator*=(int multiplier) {
        feet *= multiplier;
        inches *= multiplier;
        return *this;}
// Display length in feet and inches
    void display() const {
        cout<<feet<<" feet "<<inches<<" inches"<<endl;}};

int main() {
    Length l1, l2;
    int choice;
// Get two lengths from user
    cout<<"Enter first length (feet and inches): ";
    cin>>l1.feet>>l1.inches;
    cout<<"Enter second length (feet and inches): ";
    cin>>l2.feet>>l2.inches;
// Display menu
    cout<<"Menu:"<<endl;
    cout<<"1. Add two lengths"<<endl;
    cout<<"2. Compare lengths using <"<<endl;
    cout<<"3. Compare lengths using =="<<endl;
    cout<<"4. Multiply length with an integer"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
switch (choice){
    case 1:{
            Length result = l1 + l2;
            cout<<"Result: ";
            result.display();
            break;}
    case 2:{
            if (l1 < l2){
                cout<<"Length 1 is less than Length 2"<<endl;}else{
                cout<<"Length 1 is not less than Length 2"<<endl;}
                break;}
    case 3:{
            if(l1==l2){
                cout<<"Length 1 is equal to Length 2"<<endl;}else{
                cout<<"Length 1 is not equal to Length 2"<<endl;}
                break;}
    case 4:{
            int multiplier;
            cout<<"Enter an integer to multiply with: ";
            cin>>multiplier;
            l1 *= multiplier;
            cout<<"Result: ";
            l1.display();
            break;}
    default:
            cout<<"Invalid choice"<<endl;}
            return 0;}