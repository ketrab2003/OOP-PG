#include "Prostokat.h"
#include <iostream>

using namespace std;

Prostokat::Prostokat(double a, double b)
: a(a), b(b) {
  cout << "Konstruktor Prostokąta(" << a <<", " << b << ")" << endl;
}

double Prostokat::GetA() const {
  return a;
}

double Prostokat::GetB() const {
  return b;
}

void Prostokat::SetA(double a) {
  this->a = a;
}

void Prostokat::SetB(double b) {
  this->b = b;
}

double Prostokat::Obwod() const {
  return (this->a + this->b)*2;
}

double Prostokat::Pole() const {
  return this->a*this->b;
}

void Prostokat::Wypisz(std::ostream& out) const {
  cout << "Prostokąt(" << this->a << ", " << this->b << ")" << endl;
}

Prostokat::~Prostokat() {
  cout << "Destruktor Prostokąta(" << this->a <<", " << this->b << ")" << endl;
}