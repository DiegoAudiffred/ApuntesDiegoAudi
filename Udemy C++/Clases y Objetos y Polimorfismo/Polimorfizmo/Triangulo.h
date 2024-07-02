#include <iostream>
#include "math.h"
#include "Poligono.h"
using namespace std;

class Triangulo : public Poligono
{
private:
    int x, y, z;

public:
    Triangulo(float x, float y, float z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    ~Triangulo()
    {
    }

    float getPerimetro()
    {
        return x + y + z;
    }

    float getArea()
    {
        float s = (x + y + z) / 2;

        return sqrt(s * (s - x) * (s - y) * (s - z));
    }
};
