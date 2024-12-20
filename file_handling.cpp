#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file1("file1.txt");
    ofstream file2("file2.txt");
    ofstream file3("file3.txt");
    ifstream file4("file2.txt");

    string name,s;
    int age, roll_no;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter roll no: ";
    cin >> roll_no;

    file1 << "Name: " << name << endl; 
    file1 << "Age: " << age <<  endl; 

    file2 <<"Roll No: " << roll_no <<  endl;

    file3 << "Name: "<<name << endl;
    file3 << "Age: "<<age << endl;
    file3 << "Roll No: "<<roll_no << endl;

    // file4>>s;
getline(file4,s);
cout<<s;

    file1.close();
    file2.close();
    file3.close();
    file4.close();

    return 0;
}