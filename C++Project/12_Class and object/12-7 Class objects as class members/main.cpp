#include <string>
#include <iostream>
#include <windows.h>
 
using namespace std;

// 日期类
class Date {
public:
    Date(int y, int m, int d) : year(y), month(m), day(d) {}
    void display() const {
        cout << year << "-" << month << "-" << day;
    }
private:
    int year, month, day;
};

// 图书类
class Book {
public:
    Book(string title, string author) 
        : title(title), author(author) {}
    
    void displayInfo() const {
        cout << "书名: " << title << ", 作者: " << author;
    }
    
private:
    string title;
    string author;
};

// 借阅记录类
class BorrowRecord {
public:
    BorrowRecord(Book book, Date borrowDate, Date returnDate) 
        : book(book), borrowDate(borrowDate), returnDate(returnDate) {}
    
    void displayRecord() const {
        book.displayInfo();
        cout << "\n借阅日期: ";
        borrowDate.display();
        cout << "\n应还日期: ";
        returnDate.display();
        cout << endl;
    }
    
private:
    Book book;         // Book类的对象作为成员
    Date borrowDate;   // Date类的对象作为成员
    Date returnDate;   // Date类的对象作为成员
};

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Book book("C++ Primer", "Stanley Lippman");
    Date borrow(2023, 10, 1);
    Date returnDate(2023, 10, 31);
    
    BorrowRecord record(book, borrow, returnDate);
    record.displayRecord();
    
    return 0;
}