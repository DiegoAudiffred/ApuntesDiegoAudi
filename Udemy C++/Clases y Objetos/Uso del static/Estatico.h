#ifndef PARTICLES_H
#define PARTICLES_H
#include <iostream>
using namespace std;

class Estatico
{
private:
    static int contador; // Atributo estatico
public:
    Estatico();
    int getContador();
};
Estatico::Estatico()
{
    contador++;
}

int Estatico::getContador()
{
    return contador;
}
#endif