#include <string>
#include <iostream>
#include <sstream>
#include "book.h"

using namespace std;

Book::Book() {
    title = "";
    author = "";
    isbn = "";
    isAvailable = true;
    borrowerName = "";
}

Book::Book(const string& title, const string& author, const string& isbn) {
    this->title = title;
    this->author = author;
    this->isbn = isbn;
    this->isAvailable = true;
    this->borrowerName = "";
}

string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
string Book::getISBN() const { return isbn; }
bool Book::getAvailability() const { return isAvailable; }
string Book::getBorrowerName() const { return borrowerName; }


void Book::setTitle(const string& title) { this->title = title; }
void Book::setAuthor(const string& author) { this->author = author; }
void Book::setISBN(const string& isbn) { this->isbn = isbn; }
void Book::setAvailability(bool available) { this->isAvailable = available; }
void Book::setBorrowerName(const string& name) { this->borrowerName = name; }



void Book::checkOut(const string& borrower) {
    if (isAvailable) {
        setAvailability(false);
        setBorrowerName(borrower);
    }
}

void Book::returnBook() {
    setAvailability(true);
    setBorrowerName("");
}

string Book::toString() const {
    std::ostringstream oss;
    oss << "Titre: " << title << "\n"
        << "Auteur: " << author << "\n"
        << "ISBN: " << isbn << "\n"
        << "Statut: " << (isAvailable ? "Disponible" : "Emprunté par " + borrowerName) << "\n";
    return oss.str();
}

string Book::toFileFormat() const {
    string dispo = isAvailable ? "1" : "0";
    return title + "|" + author + "|" + isbn + "|" + dispo + "|" + borrowerName;
}

void Book::fromFileFormat(const string& line) {
    stringstream ss(line);
    string titre, auteur, code, dispoStr, emprunteur;

    getline(ss, titre, '|');
    getline(ss, auteur, '|');
    getline(ss, code, '|');
    getline(ss, dispoStr, '|');
    getline(ss, emprunteur, '|');

    title = titre;
    author = auteur;
    isbn = code;
    isAvailable = (dispoStr == "1");
    borrowerName = emprunteur;
}
