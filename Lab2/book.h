#pragma once
#include <iostream>
#include <string>

class Book {
  std::string author, title;

  friend std::ostream& operator<<(std::ostream &out, const Book &book);
public:
  Book();
  Book(const std::string &author, const std::string &title);
  Book(std::string &&author, std::string &&title);

  std::string GetAuthor() const;
  std::string GetTitle() const;

  void SetAuthor(const std::string &author);
  void SetTitle(const std::string &title);

  void SetAuthor(std::string &&author);
  void SetTitle(std::string &&title);

  Book(const Book &other);
  Book(Book &&other) noexcept;
  Book& operator=(const Book &right);
  Book& operator=(Book &&right) noexcept;
};