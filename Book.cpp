#include "Book.h"
#include <iostream>

using namespace std;

Book::Book(int bookId, string title, string author)
    : bookId(bookId),
      title(title),
      author(author),
      isAvailable(true),
      issuedToMemberId(-1)
{
}

void Book::issueBook(int memberId)
{
    if (isAvailable)
    {
        isAvailable = false;
        issuedToMemberId = memberId;

        cout << "\n-------------------------------------------\n\n";
        cout << "Book issued Successfully\n";
        cout << "\n-------------------------------------------\n\n";
    }
    else
    {
        cout << "\n-------------------------------------------\n\n";
        cout << "Book is Not available\n";
        cout << "\n-------------------------------------------\n\n";
    }
}

void Book::returnBook()
{
    if (!isAvailable)
    {
        isAvailable = true;
        issuedToMemberId = -1;

        cout << "-------------------------------------------\n\n";
        cout << "Book returned successfully\n";
        cout << "-------------------------------------------\n\n";
    }
    else
    {
        cout << "-------------------------------------------\n";
        cout << "Book is already available\n";
        cout << "-------------------------------------------\n";
    }
}

void Book::displayBook() const
{
    cout << "-------------------------------------------\n";
    cout << "Book Id: " << bookId << endl;
    cout << "Book Title: " << title << endl;
    cout << "Author: " << author << endl;

    if (isAvailable)
        cout << "Status: Available\n";
    else
        cout << "Status: Issued to Member ID: " << issuedToMemberId << endl;

    cout << "-------------------------------------------\n";
}

int Book::getBookId() const
{
    return bookId;
}

bool Book::getAvailability() const
{
    return isAvailable;
}