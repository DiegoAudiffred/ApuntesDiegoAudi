#include <iostream>
#include "Punto.h"

using namespace std;



int main(int argc, char const *argv[])
{
   Punto pt;
   pt.setX(5);
   cout<<pt.getX()<<endl;
   
   Punto pt2(5,10);
   cout<<pt2.getY()<<endl;

   Punto* p2 = new Punto();
   p2->setX(5); //Flechita para objetos dinamicos, puntos para los demas 
   p2->setY(8);
   cout<<p2->getX()<<endl;
   cout<<p2->getY()<<endl;
}
