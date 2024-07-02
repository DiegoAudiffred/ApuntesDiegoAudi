#include <iostream>
#include "Poligono.h"
using namespace std;

class Rectangulo : public Poligono
{
private:
    /* data */
    float x, y;

public:
    Rectangulo(float x, float y)
    {
        this->x = x;
        this->y = y;
    }
    ~Rectangulo()
    {
    }

    float getPerimetro()
    {
        return (x * 2) + (y * 2);
    }

    float getArea()
    {
        return (x * y);
    }
};
