#include <iostream>
#include "Vehiculo.h"
#include "String.h"
using namespace std;

class Deportivo : private Vehiculo
{
private:
    /* data */
    int cilindrada;

public:
    Deportivo(string marca, string color, string modelo, int cilindrada) : Vehiculo(marca, color, modelo)
    {
        this->cilindrada = cilindrada;
    }
    int getCilindradas()
    {
        return cilindrada;
    }
    ~Deportivo()
    {
    }

    string reportarMarca(){
        string marc= getMarca();
        return marc;
    }
};
