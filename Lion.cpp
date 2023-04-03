#include "Lion.h"
#include "Animal.h"

  //mutateurs
void Lion :: setAttaque()
{
  Attaque();
}

  //méthodes
void Lion :: deplace(int maxX, int maxY)
{
  srand( time( NULL ) );
  int dx = 0;
  int dy = 0;
  dx  = (rand() % 3) - 1;
  dy  = (rand() % 3) - 1;
  
  x += dx;
  y += dy;

  if(x >= maxX)
  {
    x = x - maxX;
  }
  if(y >= maxY)
  {
    y = y - maxY;
  }
}

Lion :: Lion ( int maxX, int maxY) : Animal( maxX,  maxY){
    
}

Lion:: Lion (int maxX, int maxY, int a, int b) : Animal( maxX,  maxY,  a, b) {
  }

Lion :: ~Lion(){
  
}



