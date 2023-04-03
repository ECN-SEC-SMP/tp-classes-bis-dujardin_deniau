#include "Lion.h"

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
  dx  = (rand() % 5) - 2;
  dy  = (rand() % 5) - 2;
  
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