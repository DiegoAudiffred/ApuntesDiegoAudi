#include <iostream>
#include "Personaje.h"
using namespace std;

void modificar(Personaje &p1, int atk, int dfc)
{
    p1.ataque = atk;
    p1.defensa = dfc;
}

int main(int argc, char const *argv[])
{
    Personaje *p1 = new Personaje(20, 40);
    p1->mostrarDatos();
    modificar(*p1, 100, 100);
    p1->mostrarDatos();

    return 0;
}
