#include <iostream>
#include "String.h"
#include "string.h"
#ifndef VEHICULO_H//Guadrian de inclusion multiple
#define VEHICULO_H
using namespace std;
class Vehiculo
{
private:
    /* data */
    string marca;
    string color;
public:
    Vehiculo(string marca,string color,string modelo){
        this->marca = marca;
        this->color = color;
        this->modelo = modelo;
    }
    string getMarca(){
        return marca;
    }
    string getColor()
    {
        return color;
    }
    void setColor(string color){
        this->color=color;
    }

    string dameModelo(){
        string mensaje = getModelo();
        return mensaje;
    }
protected:
    string modelo;
    string getModelo()
    {
        return modelo;
    }
};

#endif
