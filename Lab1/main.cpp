#include "FiguraPlaska.h"
#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"
#include <iostream>

using namespace std;

int main() {
  Prostokat p(5, 3);
  Trojkat t(3, 4, 5);
  Kolo k(6.4);

  cout << p
       << "Obwód: " << p.Obwod() << endl
       << "Pole: " << p.Pole() << endl;
  cout << t
       << "Obwód: " << t.Obwod() << endl
       << "Pole: " << t.Pole() << endl;
  cout << k
       << "Obwód: " << k.Obwod() << endl
       << "Pole: " << k.Pole() << endl;
  cout << endl;

  cout << "Wskaźnikowe:" << endl;
  FiguraPlaska *tab[3];
  tab[0] = new Prostokat(2, 3);
  tab[1] = new Kolo(4);
  tab[2] = new Trojkat(3, 6, 7);

  for(const FiguraPlaska* fig: tab) {
    cout << *fig
         << "Obwód: " << fig->Obwod() << endl
         << "Pole: " << fig->Pole() << endl;
  }
  cout << endl;

  for(const FiguraPlaska* fig: tab) {
    delete fig;
  }
  cout << endl;

  return 0;
}