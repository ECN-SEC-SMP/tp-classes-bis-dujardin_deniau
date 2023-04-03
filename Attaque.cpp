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
  
  }
Attaque :: Attaque () {
  srand( time( NULL ) );
      int type = 0;
      type  = rand() % 3;
}

Attaque :: Attaque (int b) {
  if (b <= 2 && b>= 0) type = b; 
}