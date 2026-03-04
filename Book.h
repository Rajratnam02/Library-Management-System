#pragma once
#include<string>


class Book
{
private:
    int bookId;
    std::string title;
    std::string author;
    bool isAvailable;
    int issuedToMemberId;

public:
    Book(int bookId, std::string title, std::string author);

    void issueBook(int memberId);

    void returnBook();

    void displayBook() const;
    
    int getBookId() const;
    
    bool getAvailability() const;
    
};