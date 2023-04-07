#include <iostream>
#include <stdlib.h>
#include "fonction.h"

using namespace std;

void affichage(Animal* plateau[10][10])
{
        for(int i = 0;i<10;i++)
      {
        for(int z=0;z<10;z++)
        {
         cout << "|----";
        }
        cout << "|" << endl;
        for(int j=0;j<10;j++)
        {

          if(plateau[j][i] != nullptr && plateau[j][i]->getX() == j && plateau[j][i]->getY() == i)
          {

            cout << "| " << plateau[j][i]->getCaractere() << "  ";
          }
          else
          {        
            cout << "| " << "_" << "  ";
          }
        }
        cout << "|" << endl;
      }
}
