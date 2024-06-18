#include <iostream>
#include "Book.h"

int main() {
    // Create a Book object
    Book testbook("Diary of a Wimpy Kid", "Gabriel Duhaylungsod", "9780670074921", "Harry N. Abrams, Inc.");

    // Test getters
    cout << "Title: " << testbook.getTitle() << endl;
    cout << "Author: " << testbook.getAuthor() << endl;
    cout << "ISBN: " << testbook.getISBN() << endl;
    cout << "Publisher: " << testbook.getPublisher() << endl;
    endl(cout);

    // Test setters
    testbook.setTitle("Diary of a Wimpy Kid");
    testbook.setAuthor("Gabriel Duhaylungsod");
    testbook.setISBN("9780670074921");
    testbook.setPublisher("Harry N. Abrams, Inc.");

    // Test getters again to see if setters worked
    cout << "Title: " << testbook.getTitle() << endl;
    cout << "Author: " << testbook.getAuthor() << endl;
    cout << "ISBN: " << testbook.getISBN() << endl;
    cout << "Publisher: " << testbook.getPublisher() << endl;

    return 0;
}