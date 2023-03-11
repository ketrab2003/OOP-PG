#include "library.h"
#include "book.h"
#include <cstddef>
#include <stdexcept>
#include <utility>

std::ostream& operator<<(std::ostream &out, const Library &library) {
  out << "{";
  for(std::size_t i=0; i<library._size; ++i) {
    out << library[i];
    if(i < library._size - 1) {
      out << ", ";
    }
  }
  out << "}";

  return out;
}

Library::Library() 
: Library(0) {
}

Library::Library(const std::size_t size)
: _size(size),
  _books(new Book[size]) {
}

Library::Library(std::initializer_list<Book> list)
: _size(list.size()),
  _books(new Book[list.size()]) {
  std::copy(list.begin(), list.end(), _books);
}

Library::Library(const Library& orig)
: _size(orig._size),
  _books(new Book[orig._size]) {
  std::copy(orig._books, orig._books+orig._size, _books);
}

Library::Library(Library&& orig) noexcept
: _size(std::exchange(orig._size, 0)),
  _books(std::exchange(orig._books, nullptr)) {
}

Library& Library::operator=(const Library& right) {
  if(_size != right._size) {
    delete[] _books;
    _books = new Book[right._size];
    _size = right._size;
  }

  std::copy(right._books, right._books+right._size, _books);

  return *this;
}

Library& Library::operator=(Library&& right) noexcept {
  std::swap(_books, right._books);
  std::swap(_size, right._size);
  return *this;
}

Book& Library::operator[](std::size_t index) {
  if(index >= _size) {
    throw std::out_of_range("index is too big");
  }
  return _books[index];
}

const Book& Library::operator[](std::size_t index) const {
  if(index >= _size) {
    throw std::out_of_range("index is too big");
  }
  return _books[index];
}

std::size_t Library::GetSize() const {
  return _size;
}

Library::~Library() {
  delete[] _books;
}