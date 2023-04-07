#include "Loup.h"
#include "Animal.h"

  //mutateurs
void Loup :: setAttaque()
{
  for(int i = 0;i < 1000000;i++){}// créer une attente pour assurer le changement de seed pour srand
  srand( time( NULL ) );
  int t;
  t  = rand() % 3;
  typeAttaque = Attaque(t);
}
char Loup::getCaractere()
{
  return 'W';
}
  //méthodes
void Loup :: deplace(int maxX, int maxY)
{
  srand( time( NULL ) );
  int dx = 0;
  int dy = 0;
  dx  = (rand() % 10);
  dy  = (rand() % 10);
  
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

Loup :: Loup ( int maxX, int maxY) : Animal( maxX,  maxY){
    
}

Loup:: Loup (int maxX, int maxY, int a, int b) : Animal( maxX,  maxY,  a, b) {
  }

Loup :: ~Loup(){
  
}



