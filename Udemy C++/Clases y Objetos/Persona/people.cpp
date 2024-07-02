#include <iostream>
#include "Persona.h"

using namespace std;



int main(int argc, char const *argv[]){

 Persona *p1;
 Persona *p2;
 p1 = new Persona(5);
p2 = new Persona("Audi",23);

Persona pers[4]; //Estatico
Persona * pers2 = new Persona[4]; //Dinamico

for (int i = 0; i < 4; i++) //Llamar metodos
{
   (pers2+i)->llenar();
   pers[i].llenar();
}

for (int i = 0; i < 4; i++) //Llammar a imprimir
{
   (pers2+i)->Mostar();
   pers[i].Mostar();
}

delete p1;

}
