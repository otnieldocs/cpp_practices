#include <iostream>
using namespace std;

struct Book {
    char title[50];
    int bookId;
};

int main() {
    struct Book book1;
    struct Book book2;

    strcpy_s(book1.title, "Learn C++");
    book1.bookId = 1;
    cout << "book id 1 title = " << book1.title << endl;

    strcpy_s(book2.title, "Learn C++ v2");
    book1.bookId = 2;
    cout << "book id 2 title = " << book2.title << endl;

    struct Book *book3 = &book2;
    cout << "book3 title = " << book3->title << endl;

    return 0;
}