#ifndef Lion_h
#define Lion_h

#include "Animal.h"

class Lion : public Animal{

  public :
  //mutateurs
  void setAttaque();

  //méthodes
  void deplace(int maxX, int maxY);

  //constructeur
  Lion(int maxX, int maxY);
  Lion(int maxX, int maxY, int a, int b);
 //destructeur
  // virtual ~Animal();
  ~Lion(); 

};

#endif /* Lion_h */