#include<iostream>
using namespace std;

class Book
{
    string title, author;
    bool isIssued;

public:

    Book(string t, string a)
    {
        title = t;
        author = a;
        isIssued = false;
        cout << "Book added: " << title << endl;
    }

    void issueBook()
    {
        isIssued = true;
        cout << "Book Issued" << endl;
    }

    void returnBook()
    {
        isIssued = false;
        cout << "Book Returned" << endl;
    }

    
    ~Book()
    {
        cout << "Book record removed: " << title << endl;
    }
};

int main()
{
    {
        Book b1("The Alchemist", "software engineer");

        b1.issueBook();
        b1.returnBook();
    }

    return 0;
}