#include "Trojkat.h"
#include <cmath>
#include <iostream>

using namespace std;

Trojkat::Trojkat(double a, double b, double c)
: a(a), b(b), c(c) {
  cout << "Konstruktor Trójkąta(" << a <<", " << b << ", " << c << ")" << endl;
}

double Trojkat::GetA() const {
  return a;
}

double Trojkat::GetB() const {
  return b;
}

double Trojkat::GetC() const {
  return c;
}

void Trojkat::SetA(double a) {
  this->a = a;
}

void Trojkat::SetB(double b) {
  this->b = b;
}

void Trojkat::SetC(double c) {
  this->c = c;
}

double Trojkat::Obwod() const {
  return this->a + this->b + this->c;
}

double Trojkat::Pole() const {
  double s = (this->a + this->b + this->c)/2;
  return sqrt(s*(s-a)*(s-b)*(s-c));
}

void Trojkat::Wypisz(std::ostream& out) const {
  cout << "Trójkąt(" << this->a << ", " << this->b << ", " << this->c << ")" << endl;
}

Trojkat::~Trojkat() {
  cout << "Destruktor Trójkąta(" << this->a <<", " << this->b << ", " << this->c << ")" << endl;
}