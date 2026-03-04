# 📚 Library Management System (C++)

A console-based Library Management System implemented in C++ using Object-Oriented Programming (OOP) principles. This project simulates a simple library where books can be added, issued, returned, and managed.

## ✨ Features
- Add new books
- Add new members
- Issue books to members
- Return issued books
- Remove books from the library
- Display all books
- Track total number of books
- Menu-driven interface

## 🧠 Concepts Used
This project demonstrates several core C++ and OOP concepts:
- Classes and Objects
- Encapsulation
- Constructor Initialization Lists
- Static Data Members
- Static Member Functions
- Header (.h) and Implementation (.cpp) separation
- STL vector
- Menu-driven program design

## 📂 Project Structure
LibraryManagementSystem
|
|-- Book.h
|-- Book.cpp
|
|-- Member.h
|-- Member.cpp
|
|-- Library.h
|-- Library.cpp
|
|-- main.cpp

## ⚙️ Compilation
Compile all source files together:
g++ main.cpp Book.cpp Member.cpp Library.cpp -o library

Run the program:
./library

On Windows:
library.exe

## 🖥️ Program Menu
========== Library Menu ==========

1. Add Book
2. Add Member
3. Issue Book
4. Return Book
5. Remove Book
6. Display All Books
7. Show Total Books
8. Exit

## 📘 Class Design

### Book
Represents a book in the library.
**Attributes**
- bookId
- title
- author
- isAvailable
- issuedToMemberId

**Responsibilities**
- Issue book
- Return book
- Display book details

### Member
Represents a library member.
**Attributes**
- memberId
- name

**Responsibilities**
- Store member information
- Provide member ID access

### Library
Central manager of books and members.
**Attributes**
- vector<Book> books
- vector<Member> members
- static int totalBooks
- static int nextBookId

**Responsibilities**
- Add books
- Add members
- Issue books
- Return books
- Remove books
- Display books
- Track total books

## 🚀 Future Improvements
- Search books by title or author
- File persistence using fstream
- Track books issued per member
- Late return penalty system
- GUI version
- Database integration

## 📖 Learning Outcomes
By building this project you practice:
- Structuring multi-file C++ projects
- Separating interface (.h) and implementation (.cpp)
- Using STL containers effectively
- Designing simple real-world systems with OOP

## 👨‍💻 Author
**Rajratnam**
Created as a learning project for practicing C++ Object-Oriented Programming and project structure.