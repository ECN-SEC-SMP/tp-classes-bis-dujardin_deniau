#include "Pierre.h"
#include "Animal.h"

  //mutateurs
void Pierre :: setAttaque()
{
  typeAttaque = Attaque(1);
}

char Pierre::getCaractere()
{
  return 'P';
}

  //méthodes
void Pierre :: deplace(int maxX, int maxY)
{

  x += x;
  y += y;

  if(x >= maxX)
  {
    x = x - maxX;
  }
  if(y >= maxY)
  {
    y = y - maxY;
  }
}

Pierre :: Pierre ( int maxX, int maxY) : Animal( maxX,  maxY){
    
}

Pierre:: Pierre (int maxX, int maxY, int a, int b) : Animal( maxX,  maxY,  a, b) {
  }

Pierre :: ~Pierre(){
  
}



