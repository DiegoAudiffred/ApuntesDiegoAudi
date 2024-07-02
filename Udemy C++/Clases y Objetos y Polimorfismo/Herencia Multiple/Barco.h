#include <iostream>
using namespace std;

#include "string.h"

class Barco
{
private:
    string nombre;

public:
    Barco(string nombre)
    {
        this->nombre = nombre;
    }
    ~Barco()
    {
    }

    void indicarBarco()
    {
        cout << "Desplazamiento por agua" << endl;
    }

    string getNombre()
    {
        return nombre;
    }
};
