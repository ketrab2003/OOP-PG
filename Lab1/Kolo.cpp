#include "Kolo.h"
#include <cmath>
#include <iostream>

using namespace std;

Kolo::Kolo(double r)
: r(r) {
  cout << "Konstruktor Koła(" << r << ")" << endl;
}

double Kolo::GetR() const {
  return r;
}

void Kolo::SetR(double r) {
  this->r = r;
}

double Kolo::Obwod() const {
  return 2*M_PI*r;
}

double Kolo::Pole() const {
  return M_PI*r*r;
}

void Kolo::Wypisz(std::ostream& out) const {
  cout << "Koło(" << this->r << ")" << endl;
}

Kolo::~Kolo() {
  cout << "Destruktor Koła(" << this->r << ")" << endl;
}