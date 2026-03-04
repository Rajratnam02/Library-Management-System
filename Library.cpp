#include "Library.h"
#include <iostream>

using namespace std;

int Library::totalBooks = 0;
int Library::nextBookId = 1;

void Library::addBook( string title, string author)
{
    books.emplace_back(nextBookId++, title, author);
    totalBooks++;

    cout << "\nBook added successfully!\n";
}

void Library::addMember( string name)
{
    members.emplace_back(members.size() + 1, name);

    cout << "\nMember added successfully!\n";
}

void Library::issueBook(int bookId, int memberId)
{
    for (auto &member : members)
    {
        if (member.getMemberId() == memberId)
        {
            for (auto &book : books)
            {
                if (book.getBookId() == bookId)
                {
                    book.issueBook(memberId);
                    return;
                }
            }

            cout << "Book Not Found!!" << endl;
            return;
        }
    }

    cout << "Member Not Found!!" << endl;
}

void Library::returnBook(int bookId)
{
    for (auto &book : books)
    {
        if (book.getBookId() == bookId)
        {
            book.returnBook();
            return;
        }
    }

    cout << "Book Not Found!!" << endl;
}

void Library::removeBook(int bookId)
{
    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].getBookId() == bookId)
        {
            books.erase(books.begin() + i);
            totalBooks--;

            cout << "Book removed successfully!\n";
            return;
        }
    }

    cout << "Book Not Found!!" << endl;
}

void Library::displayAllBooks() const
{
    if (books.empty())
    {
        cout << "No books available in library.\n";
        return;
    }

    for (const auto &book : books)
    {
        book.displayBook();
    }
}

void Library::showTotalBooks()
{
    cout << "Total Books: " << totalBooks << endl;
}