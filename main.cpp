#include <iostream>
#include "Library.h"

using namespace std;

int main()
{
    Library stackShelf;

    while (true)
    {
        int choice;

        cout << "\n========== Library Menu ==========\n";
        cout << "1. Add Book\n";
        cout << "2. Add Member\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Remove Book\n";
        cout << "6. Display All Books\n";
        cout << "7. Show Total Books\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string title, author;

            cout << "Enter Book Title: ";
            cin.ignore();
            getline(cin, title);

            cout << "Enter Author: ";
            getline(cin, author);

            stackShelf.addBook(title, author);
            break;
        }

        case 2:
        {
            string memberName;

            cout << "Enter Member Name: ";
            cin.ignore();
            getline(cin, memberName);

            stackShelf.addMember(memberName);
            break;
        }

        case 3:
        {
            int memberId, bookId;

            cout << "Enter Member ID: ";
            cin >> memberId;

            cout << "Enter Book ID: ";
            cin >> bookId;

            stackShelf.issueBook(bookId, memberId);
            break;
        }

        case 4:
        {
            int bookId;

            cout << "Enter Book ID: ";
            cin >> bookId;

            stackShelf.returnBook(bookId);
            break;
        }

        case 5:
        {
            int bookId;

            cout << "Enter Book ID: ";
            cin >> bookId;

            stackShelf.removeBook(bookId);
            break;
        }

        case 6:
        {
            stackShelf.displayAllBooks();
            break;
        }

        case 7:
        {
            Library::showTotalBooks();
            break;
        }

        case 8:
        {
            cout << "Exiting program...\n";
            return 0;
        }

        default:
        {
            cout << "Invalid choice. Try again.\n";
        }
        }
    }
}