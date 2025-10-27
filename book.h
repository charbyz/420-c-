#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
    bool isAvailable;
    string borrowerName;

public:
    // Constructors
    Book();
    Book(const string& title, const string& author, const string& isbn);
    
    // Getters
    string getTitle() const;
    string getAuthor() const;
    string getISBN() const;
    bool getAvailability() const;
    string getBorrowerName() const;
    
    // Setters
    void setTitle(const string& title);
    void setAuthor(const string& author);
    void setISBN(const string& isbn);  
    void setAvailability(bool available);
    void setBorrowerName(const string& name);
    
    // Methods
    void checkOut(const string& borrower);
    void returnBook();
    string toString() const;
    string toFileFormat() const;
    void fromFileFormat(const string& line);
};

#endif
