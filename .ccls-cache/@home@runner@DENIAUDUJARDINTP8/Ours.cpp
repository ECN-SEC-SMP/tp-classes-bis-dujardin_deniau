#include "Ours.h"
#include "Animal.h"

  //mutateurs
void Ours :: setAttaque()
{
  typeAttaque = Attaque(2);
}

char Ours::getCaractere()
{
  return 'O';
}

  //méthodes
void Ours :: deplace(int maxX, int maxY)
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

Ours :: Ours ( int maxX, int maxY) : Animal( maxX,  maxY){
    
}

Ours:: Ours (int maxX, int maxY, int a, int b) : Animal( maxX,  maxY,  a, b) {
  }

Ours :: ~Ours(){
  
}



