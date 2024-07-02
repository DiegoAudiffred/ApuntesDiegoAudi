#include <iostream>
using namespace std;

#include "string.h"
class Avion
{
private:
    string modelo;

public:
    Avion(string modelo)
    {
        this->modelo = modelo;
    }

    ~Avion()
    {
    }

    string getModelo()
    {
        return modelo;
    }
    void indicarAvion()
    {
        cout << "Desplazamiento por agua" << endl;
    }
};
