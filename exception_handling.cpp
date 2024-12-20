#include <iostream>
#include <fstream>
using namespace std;

int main() {
    try {
        ofstream file1("file1.txt");
        ofstream file2("file2.txt");
        ofstream file3("file3.txt");

        if (!file1.is_open() || !file2.is_open() || !file3.is_open()) {
            throw runtime_error("Error opening file");
        }

        string name;
        int age, roll_no;

        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter roll no: ";
        cin >> roll_no;

        file1 << name << " " << age;
        file2 << roll_no;
        file3 << name << " " << age << " " << roll_no;

        file1.close();
        file2.close();
        file3.close();
    } catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}




// #include<iostream>
// using namespace std;

// int main() {
//     int num, denom, result;
//     cout << "Enter numerator: ";
//     cin >> num;
//     cout << "Enter denominator: ";
//     cin >> denom;

//     try {
//         if (denom == 0)
//             throw "Division by zero exception!";
//         result = num / denom;
//         cout << "Result: " << result << endl;
//     }
//     catch (const char* msg) {
//         cout << msg << endl;
//     }

//     return 0;
// }


