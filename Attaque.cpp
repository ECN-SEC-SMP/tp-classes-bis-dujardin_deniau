#include <iostream>
#include <stdlib.h>
using namespace std;

#include "Attaque.h"
#include "Animal.h"

int Attaque:: getTypeAttaque()const{
  return type; 
}
string Attaque:: getNomAttaque()const{
  if (type == 1)
  {
    return "Pierre";
  }
  else if (type == 2)
  {
    return "feuille";
  }
  else{
    return "cisceau";
  } 
  
  }
Attaque :: Attaque () {
  int type;
  srand( time( NULL ) );
  type  = rand() % 3;
  //cout << "type: " << type << endl;
}

Attaque :: Attaque (int b) {
  if (b <= 2 && b>= 0) type = b; 
}

bool Attaque::resoudreAttaque(Attaque &a)const
{
  if(type == a.type)
  {
    cout << "egalite" << endl;
    return true;
  }
  else if (type == 0 && a.type == 2)
  {
    cout << "gagner" << endl;
    return true;
  }
  else if(type == 2 && a.type == 1)
  {
    cout << "ganger" << endl;
    return true;
  }
    else if(type == 1 && a.type == 0)
  {
    cout << "ganger" << endl;
    return true;
  }
  else{
    cout << "perdu" << endl;
    return true;
  }

  
}