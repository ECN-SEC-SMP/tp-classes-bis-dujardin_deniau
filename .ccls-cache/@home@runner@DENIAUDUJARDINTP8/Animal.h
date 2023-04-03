#include <iostream>

using namespace std;

#ifndef Animal_h
#define Animal_h

class Animal {

  protected : 

  string nom;
  int x; //abscisse de l'animal
  int y; //ordonnée de l'animal
  bool vivant;
  //Attaque typeAttaque;

  public :
  //accesseur
  string getNom();
  int getX()const;
  int getY()const;
  bool getVivant()const;
  //Attaque getAttaque();

  //mutateur
  void setVivant(bool vivant);
  virtual void setAttaque() = 0;

  //constructeur
  Animal(int maxX, int maxY);
  Animal(int maxX, int maxY, int a, int b);

  //destructeur
  ~Animal();

  //méthodes
  virtual void deplace(int maxX, int maxY) = 0;
  bool attaque(Animal &a);
  

};

#endif /* Animal_h */