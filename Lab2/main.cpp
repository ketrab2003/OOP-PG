#include <iostream>
#include "book.h"
#include "library.h"

using namespace std;

void book_test() {
  cout << "Book test: " << endl;
  string a="Marcel Proust", t="In Search of Lost Time";
  Book e;
  cout << "e: " << e << endl;
  Book b1 = {a, t};
  cout << "b1: " << b1 << endl;
  Book b2 = {"James Joyce","Ulysses"};
  cout << "b2: " << b2 << endl;
  Book b3 = b1;
  cout << "b3: " << b3 << " b1: " << b1 << endl;
  e = std::move(b2);
  cout << "e: " << e << " b2:" << b2 << endl;
  e.SetAuthor("Miguel de Cervantes");
  cout << "e: " << e << endl;
  e.SetTitle("Don Quixote");
  cout << "e: " << e << endl;
}

void library_test() {
  cout << "Library test: " << endl;
  Library e;
  cout << "e: " << e << endl;
  //3-5 książek
  Library l1 = {{"One Hundred Years of Solitude", "Gabriel Garcia Marquez"},
                {"The Great Gatsby", "F. Scott Fitzgerald"},
                {"Moby Dick", "Herman Melville"}};
  cout << "l1: " << l1 << endl;
  Library l2(2);
  cout << "l2: " << l2 << endl;
  l2[0] = {"War and Peace", "Leo Tolstoy"};
  l2[1] = {"Hamlet", "William Shakespeare"};
  cout << "l2: " << l2 << endl;
  e = std::move(l2);
  cout << "e: " << e << " l2: "<< l2 << endl;
  l1[0] = std::move(e[1]);
  cout << "l1: " << l1 << " e: "<< e << endl;
}

int main() {
  book_test();
  library_test();
  return 0;
}