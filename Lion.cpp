#include "Lion.h"
#include "Animal.h"

  //mutateurs
void Lion :: setAttaque()
{  
  for(int i = 0;i < 1000000;i++)
  srand( time( NULL ) );
  int t;
  t  = (rand() % 2)+1;
  typeAttaque = Attaque(t);
  
}

char Lion::getCaractere()
{
  return 'L';
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
  if(x < 0)
  {
    x = maxX+x;
  }
  if(y < 0)
  {
    y = maxY + y;
  }
}

Lion :: Lion ( int maxX, int maxY) : Animal( maxX,  maxY){
    
}

Lion:: Lion (int maxX, int maxY, int a, int b) : Animal( maxX,  maxY,  a, b) {
  }

Lion :: ~Lion(){
  
}



