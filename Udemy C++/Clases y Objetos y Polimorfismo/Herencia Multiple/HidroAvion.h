
#include <iostream>
using namespace std;
#include "Barco.h"
#include "Avion.h"
#include "string.h"
class HidroAvion : public Avion, public Barco
{
private:
    string codigo;

public:
    HidroAvion(string modelo, string nombre, string codigo) : Avion(modelo), Barco(nombre)
    {
        this->codigo = codigo;
    }
    ~HidroAvion()
    {
    }

    string getCodigo()
    {
        return codigo;
    }

    void mostrarDatos()
    {
        cout << getNombre() << endl;

        cout << getModelo() << endl;

        cout << codigo << endl;
    }
};
