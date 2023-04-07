#ifndef Ours_h
#define Ours_h

#include "Animal.h"

class Ours : public Animal{

  public :
  //mutateurs
  void setAttaque();

  //méthodes
  void deplace(int maxX, int maxY);

  //constructeur
  Ours(int maxX, int maxY);
  Ours(int maxX, int maxY, int a, int b);
 //destructeur
  // virtual ~Animal();
  ~Ours(); 
  char getCaractere();

};

#endif /* Ours_h */