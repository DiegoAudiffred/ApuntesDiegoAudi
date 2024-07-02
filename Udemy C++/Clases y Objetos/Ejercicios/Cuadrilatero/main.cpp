#include <iostream>
#include "Cuadrilatero.h"
using namespace std;
int main(int argc, char const *argv[])
{
    Cuadrilatero *cuadrado = new Cuadrilatero(5);
    cout << cuadrado->obtenerArea()
         << endl;
    cout << cuadrado->obtenerPerimetro()
         << endl;

    Cuadrilatero *rectangulo = new Cuadrilatero(5, 10);
    cout << rectangulo->obtenerArea()
         << endl;
    cout << rectangulo->obtenerPerimetro()
         << endl;

    return 0;
}
