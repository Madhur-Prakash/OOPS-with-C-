#include <iostream>
using namespace std;

struct Distance {
    int feet;
    int inches;
};

Distance addDis(Distance d1, Distance d2){
    Distance result;
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet + result.inches / 12;
    result.inches %= 12;
    return result;
}
int main() {
    Distance d1, d2, result;
    cout << "Enter first distance:" << endl;
    cout << "Feet: ";
    cin >> d1.feet;
    cout << "Inches: ";
    cin >> d1.inches;
    cout << "Enter second distance:" << endl;
    cout << "Feet: ";
    cin >> d2.feet;
    cout << "Inches: ";
    cin >> d2.inches;
    result = addDis(d1, d2);
    cout << "Sum of distances = " << result.feet << " feet " << result.inches << " inches" << endl;}
