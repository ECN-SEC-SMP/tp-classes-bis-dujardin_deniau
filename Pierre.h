#ifndef Pierre_h
#define Pierre_h

#include "Animal.h"

class Pierre : public Animal{

  public :
  //mutateurs
  void setAttaque();

  //méthodes
  void deplace(int maxX, int maxY);

  //constructeur
  Pierre(int maxX, int maxY);
  Pierre(int maxX, int maxY, int a, int b);
 //destructeur
  // virtual ~Animal();
  ~Pierre(); 
  char getCaractere();

};

#endif /* Pierre_h */