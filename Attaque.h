#include <iostream>

using namespace std;

#ifndef Attaque_h
#define Attaque_h

class Attaque {

  private :
  int type; // 0 : pierre, 1 : feuille, 2 : ciseaux
  

  public :
  //accesseur
  int getTypeAttaque()const;
  string getNomAttaque()const;

  //constructeur
  Attaque(); //crée une attaque random
  Attaque(int a); //crée une attaque spécifique

  //méthodes
  bool resoudreAttaque(Attaque &a)const;
  
  

};

#endif /* Attaque_h */