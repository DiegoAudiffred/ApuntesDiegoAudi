#include <iostream>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    Poligono *pol[2];
    pol[0] = new Rectangulo(2, 4);
    pol[1] = new Triangulo(1, 2, 3);

    for (int i = 0; i < 2; i++)
    {
        cout << pol[i]->getArea() << endl;
        cout << pol[i]->getPerimetro() << endl;
    }

    return 0;
}
