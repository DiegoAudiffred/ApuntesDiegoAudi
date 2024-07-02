#include <iostream>
using namespace std;

class Tablero
{
private:
    int x;
    int y;

public:
    Tablero(int x, int y);
    void mvArriba(int n);
    void mvAbajo(int n);
    void mvIzq(int n);
    void mvDer(int n);
    int getX();
    int getY();
};

Tablero::Tablero(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Tablero::mvAbajo(int n)
{
    y = y - n;
}
void Tablero::mvDer(int n)
{
    x = x + n;
}
void Tablero::mvIzq(int n)
{
    x = x - n;
}
void Tablero::mvArriba(int n)
{
    y = y + n;
}
int Tablero::getX()
{
    return x;
}
int Tablero::getY()
{
    return y;
}