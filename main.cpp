#include <iostream>
#include <stdlib.h>
#include "Lion.h"

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
  Lion a(10,10); 
  a.getX(); 
  a.deplace(10,10);
  a.getX();
}