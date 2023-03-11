#pragma once
#include "book.h"
#include <initializer_list>

class Library {
  Book *_books;
  std::size_t _size;

  friend std::ostream& operator<<(std::ostream &out, const Library &library);
public:
  Library();
  Library(const std::size_t size);
  Library(std::initializer_list<Book> list);
  Library(const Library& orig);
  Library(Library&& orig) noexcept;
  Library& operator=(const Library& right);
  Library& operator=(Library&& right) noexcept;

  Book& operator[](std::size_t index);
  const Book& operator[](std::size_t index) const;

  std::size_t GetSize() const;
  ~Library();
};