#pragma once

#include<vector>
#include<string>
#include "Book.h"
#include "Member.h"

class Library{
    private:
        std::vector<Book> books;
        std::vector<Member> members;

        static int totalBooks;
        static int nextBookId;

    public:
        void addBook(std::string title, std::string author);
        
        void addMember(std::string name);

        void issueBook(int bookId, int memberId);

        void returnBook(int bookId);

        void removeBook(int bookId);

        void displayAllBooks() const;

        static void showTotalBooks();
};