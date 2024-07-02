#include <iostream>
#include "Vehiculo.h"
#include "String.h"
using namespace std;


class Turismo : public Vehiculo
{
private:
    /* data */
    int numeroPuertas;
public:
    Turismo(string marca, string color, string modelo, int numeroPuertas): Vehiculo(marca,color,modelo){
        this->numeroPuertas = numeroPuertas;
    }
    int getPuertas(){
        return numeroPuertas;
    }
    ~Turismo(){
        
    }
};

