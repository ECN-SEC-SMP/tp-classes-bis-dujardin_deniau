#include <iostream>
#include "stdlib.h"
using namespace std;

#include "Animal.h"
#include "Attaque.h"

int Animal:: getX()const{
  //cout << "x =" << x << endl;
  return x;
}

int Animal:: getY()const{
  //cout << "y =" << y << endl;
  return y;
}

string Animal:: getNom(){
  cout << "nom : " << nom<< endl;
  return nom; 
}


  bool Animal:: getVivant()const{
    if (vivant == true) cout << "l'animal est vivant" << endl; 
    else cout << "l'animal n'est pas vivant" << endl; 
    return vivant;
  }

Attaque Animal::getAttaque()const
{  
    return typeAttaque;
}

Animal :: Animal (int maxX, int maxY){
    this -> x=rand() % 11;;
    this -> y=rand() % 11;;
    vivant = true;
}


Animal:: Animal (int maxX, int maxY, int a, int b) {
    //if (a<= maxX/2 && b<=maxY/2){
      this -> x = a;
      this -> y = b; 
    //}
    //else cout << "mauvaises valeurs";
  }

Animal :: ~Animal(){
  
}

void Animal:: setVivant(bool vivant){
  this -> vivant = vivant; 
}

void Animal:: setAttaque() {


  
}

void Animal:: deplace(int maxX, int maxY) {
  
}

bool Animal:: attaque(Animal &a){
  
}