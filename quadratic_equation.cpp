#include <iostream>
#include <cmath>
using namespace std;

void solveEq(int a, int b, int c);
int main(){
    int a, b, c;
    cout << ("Enter the coefficients of a, b and c:- ");
    cin >> a >> b >> c;
    solveEq(a, b, c);
    return 0;}
void solveEq(int a, int b, int c){
    int root1, root2, root;
    int d = (b * b) - (4 * a * c);
    int sqrt_d = sqrt(d);
    if (d > 0){
        root1 = (-b + sqrt_d) / (2 * a);
        root2 = (-b - sqrt_d) / (2 * a);
        cout << ("The roots are real and distinct.\n");
        cout << ("The first root is:- ");
        cout << root1;
        cout << ('\n');
        cout << ("The second root is:- ");
        cout << root2;}
    else if (d == 0){
        root = -b / (2 * a);
        cout << ("The roots are real and equal.\n");
        cout << ("The root is:- ");
        cout << root;}
    else if (d < 0){
        root1 = (-b + sqrt_d) / (2 * a);
        root2 = (-b - sqrt_d) / (2 * a);
        cout << ("The roots are imaginary\n");
        cout << ("The first root is:- ");
        cout << root1;
        cout << ('\n');
        cout << ("The second root is:- ");
        cout << root2;}}