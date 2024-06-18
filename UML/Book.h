#include <string>

using namespace std;

// Class representing a Book
class Book {
private:
    // Private member variables for book details
    string title;        // Title of the book
    string author;       // Author of the book
    string isbn;         // ISBN (International Standard Book Number) of the book
    string publisher;    // Publisher of the book

public:
    // Constructor to initialize Book object with given details
    Book(string title, string author, string isbn, string publisher) 
        : title(title), author(author), isbn(isbn), publisher(publisher) {}

    // Getter methods to retrieve book details:
    
    string getTitle() const { // This method returns the book's title as a string.
        return title;
    }

    string getAuthor() const { // This method returns the book's author as a string.
        return author;
    }

    string getISBN() const { // This method returns the book's ISBN as a string.
        return isbn;
    }

    string getPublisher() const { // This method returns the book's publisher as a string.
        return publisher;
    }

    // Setter methods to modify book details:

    void setTitle(string bktitle) { // This method sets the book's title to the given string.
        title = bktitle;
    }

    void setAuthor(string bkauthor) { // This method sets the book's author to the given string.
        author = bkauthor;
    }

    void setISBN(string bkisbn) { // This method sets the book's ISBN to the given string.
        isbn = bkisbn;
    }

    void setPublisher(string bkpublisher) { // This method sets the book's publisher to the given string.
        publisher = bkpublisher;
    }
};