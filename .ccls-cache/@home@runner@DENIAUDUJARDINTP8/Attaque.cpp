#include <iostream>
using namespace std;

#include "Attaque.h"

int Attaque:: getTypeAttaque()const{
  return type; 
}
string Attaque:: getNomAttaque()const{
  if (type == 1)cout << "Pierre";
  else if (type == 2) cout << "feuille";
  else cout << "cisceau";
  return type;
  }