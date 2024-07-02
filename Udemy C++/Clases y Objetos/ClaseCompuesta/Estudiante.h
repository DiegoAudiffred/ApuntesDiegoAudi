#include <iostream>
#include "string.h"
#include "Expediente.h"
#include "Direccion.h"
using namespace std;

class Estudiante
{
private:
    /* data */
    string code;
    float prom;
    Expediente exp;
    Direccion dir;

public:
    Estudiante(string code, float prom, int nmEx, string direccion);
    ~Estudiante();
    void mostrarDatos();
};

Estudiante::Estudiante(string code, float prom, int nmEx, string direccion) : exp(nmEx), dir(direccion)
{
    this->code = code;
    this->prom = prom;
}

Estudiante::~Estudiante()
{
}

void Estudiante::mostrarDatos()
{
    cout << "Codigo: " << code << endl;
    cout << "Promedio: " << prom << endl;
    cout << "Direccion: " << dir.getDireccion() << endl;
    cout << "Expediente: " << exp.getExp() << endl;
}
