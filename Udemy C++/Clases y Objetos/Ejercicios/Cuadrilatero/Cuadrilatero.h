#include <iostream>
using namespace std;
class Cuadrilatero
{
private:
    float lado1;
    float lado2;

public:
    Cuadrilatero(float lado1, float lado2);
    Cuadrilatero(float lado1);
    float obtenerPerimetro();
    float obtenerArea();
};

Cuadrilatero::Cuadrilatero(float lado1, float lado2)
{
    this->lado1 = lado1;
    this->lado2 = lado2;
}
Cuadrilatero::Cuadrilatero(float lado1)
{
    this->lado1 = lado1;
    this->lado2 = lado1;
}

float Cuadrilatero::obtenerPerimetro()
{
    return lado1 * 2 + lado2 * 2;
}

float Cuadrilatero::obtenerArea()
{
    return lado1 * lado2;
}
