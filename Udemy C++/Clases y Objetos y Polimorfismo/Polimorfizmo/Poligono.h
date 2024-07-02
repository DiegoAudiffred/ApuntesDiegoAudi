#ifndef POLIGONO_H
#define POLIGONO_H
#include <iostream>
using namespace std;

class Poligono
{
private:
    /* data */
public:
    virtual float getArea() = 0;
    virtual float getPerimetro() = 0;
};

#endif
