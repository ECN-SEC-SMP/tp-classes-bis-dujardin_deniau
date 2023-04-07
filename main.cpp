#include <iostream>
#include <stdlib.h>
#include "Lion.h"
#include "Loup.h"
#include "Pierre.h"
#include "Ours.h"
#include "Attaque.h"
#include "fonction.h"

using namespace std;


int main() {

  // Animal a(10,10);
  // a.getX();
  // int b =a.getX();
  // cout << b << endl; 
  // a.getY(); 
  // Animal x(10,10,5,5); 
  // x.getX();
  // x.getY();
  // a.getVivant(); 
  // a.setVivant(false);
  // a.getVivant(); 
  /*Lion a(10,10); 
  a.getX(); 
  a.deplace(10,10);
  a.getX();*/

 /* Lion a(10,10,5,5);
 /cout << a.getAttaque().getNomAttaque();
  a.setAttaque();
  cout << a.getAttaque().getNomAttaque();
  Ours b(10,10);
  a.setAttaque();
  b.setAttaque();
  Attaque c = b.getAttaque();
  cout << a.getAttaque().getNomAttaque() << endl;
  cout << b.getAttaque().getNomAttaque() << endl;
  a.getAttaque().resoudreAttaque(c);*/

 Animal* plateau[10][10] = {nullptr};
  srand( time( NULL ) );
  int x1 = rand() % 11;
  int y1 = rand() % 11;
  int x2 = rand() % 11;
  int y2 = rand() % 11;
  int x3 = rand() % 11;
  int y3 = rand() % 11;
  int x4 = rand() % 11;
  int y4 = rand() % 11;

  
  plateau[x1][y1] = new Loup(10,10,x1,y1);
  plateau[x2][y2] = new Lion(10,10,x2,y2);
  plateau[x3][y3] = new Pierre(10,10,x3,y3);
  plateau[x4][y4] = new Ours(10,10,x4,y4);

  plateau[x1][y1]->setAttaque();
  plateau[x2][y2]->setAttaque();
  cout << plateau[x1][y1]->getAttaque().getNomAttaque() << endl;
  cout << plateau[x2][y2]->getAttaque().getNomAttaque() << endl;

  Attaque attaque = plateau[x1][y1]->getAttaque();
  plateau[x2][y2]->getAttaque().resoudreAttaque(attaque);

  affichage(plateau);
  cout << plateau[x2][y2]->getX();
  cout << plateau[x2][y2]->getY() << endl;
  plateau[x2][y2]->deplace(10,10);
  cout << plateau[x2][y2]->getX();
  cout << plateau[x2][y2]->getY() << endl;
  affichage(plateau);


    
}