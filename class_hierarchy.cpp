#include <iostream>
#include <string>
using namespace std;

class Media {
protected:
    string title;
    string publication;
public:
    Media(const string& t, const string& p) : title(t), publication(p) {}
// Virtual functions
    virtual void read() = 0;
    virtual void show() = 0;};

class Book : public Media {
private:
    int pages;
public:
    Book(const string& t, const string& p, int pg) : Media(t, p), pages(pg) {}
    void read() {
        cout << "Reading book: " << title << endl;}
    void show() {
        cout << "Book: " << title << ", Publication: " << publication << ", Pages: " << pages << endl;}};

class Tape : public Media {
private:
    int playingTime;
public:
    Tape(const string& t, const string& p, int pt) : Media(t, p), playingTime(pt) {}
    void read() {
        cout << "Playing tape: " << title << endl;}
    void show() {
        cout << "Tape: " << title << ", Publication: " << publication << ", Playing Time: " << playingTime << " minutes" << endl;}};

int main() {
    Media* mediaPtr;
// Get input from user for Book
    string bookTitle, bookPublication;
    int bookPages;
    cout << "Enter book title: ";
    cin >> bookTitle;
    cout << "Enter book publication: ";
    cin >> bookPublication;
    cout << "Enter number of pages: ";
    cin >> bookPages;
    Book book(bookTitle, bookPublication, bookPages);
// Get input from user for Tape
    string tapeTitle, tapePublication;
    int tapePlayingTime;
    cout << "Enter tape title: ";
    cin >> tapeTitle;
    cout << "Enter tape publication: ";
    cin >> tapePublication;
    cout << "Enter playing time (in minutes): ";
    cin >> tapePlayingTime;
    Tape tape(tapeTitle, tapePublication, tapePlayingTime);
// Process objects using pointers to base class
    mediaPtr = &book;
    mediaPtr->read();
    mediaPtr->show();
    mediaPtr = &tape;
    mediaPtr->read();
    mediaPtr->show();
    return 0;}