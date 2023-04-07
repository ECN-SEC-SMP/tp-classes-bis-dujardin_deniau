#ifndef Loup_h
#define Loup_h

#include "Animal.h"

class Loup : public Animal{

  public :
  //mutateurs
  void setAttaque();

  //méthodes
  void deplace(int maxX, int maxY);

  //constructeur
  Loup(int maxX, int maxY);
  Loup(int maxX, int maxY, int a, int b);
 //destructeur
  // virtual ~Animal();
  ~Loup(); 
  char getCaractere();

};

#endif /* Loup_h */