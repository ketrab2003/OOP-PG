#include "book.h"
#include <iostream>
#include <string>

std::ostream& operator<<(std::ostream &out, const Book &book) {
  out << "Book(\"" << book.GetAuthor() << "\", \"" << book.GetTitle() << "\")";
  return out;
}

Book::Book() {
  author = "";
  title = "";
}

Book::Book(const std::string &author, const std::string &title) {
  this->author = author;
  this->title = title;
}

Book::Book(std::string &&author, std::string &&title) {
  this->author = author;
  this->title = title;
}

std::string Book::GetAuthor() const {
  return author;
}

std::string Book::GetTitle() const {
  return title;
}

void Book::SetAuthor(const std::string &author) {
  this->author = author;
}

void Book::SetTitle(const std::string &title) {
  this->title = title;
}

void Book::SetAuthor(std::string &&author) {
  this->author = author;
}

void Book::SetTitle(std::string &&title) {
  this->title = title;
}

Book::Book(const Book &other)
: author(other.author),
  title(other.title) {
}

Book::Book(Book &&other) noexcept 
: author(std::move(other.author)),
  title(std::move(other.title)) {
}

Book& Book::operator=(const Book &right) {
  author = right.author;
  title = right.title;
  return *this;
}

Book& Book::operator=(Book &&right) noexcept {
  author = std::move(right.author);
  title = std::move(right.title);
  return *this;
}