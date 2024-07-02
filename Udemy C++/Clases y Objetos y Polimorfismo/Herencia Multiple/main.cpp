#include <iostream>
using namespace std;

#include "string.h"
#include "HidroAvion.h"

int main(int argc, char const *argv[])
{
    /* code */

    HidroAvion *ob1 = new HidroAvion("Audi", "Carro", "777");
    ob1->mostrarDatos();
    ob1->indicarAvion();
    ob1->indicarBarco();
    return 0;
}
