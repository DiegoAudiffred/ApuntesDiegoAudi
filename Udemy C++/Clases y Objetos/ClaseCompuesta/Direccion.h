#include <iostream>
using namespace std;
#include "string.h"

class Direccion
{
public:
    string direccio;
    Direccion(string direccio);

    Direccion();

    string getDireccion();
};

Direccion::Direccion(string direccio)
{
    this->direccio = direccio;
}
Direccion::Direccion()
{
}

string Direccion::getDireccion()
{
    return direccio;
}