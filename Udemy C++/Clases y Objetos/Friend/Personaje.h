#include <iostream>
using namespace std;

class Personaje
{
    friend void modificar(Personaje &, int, int);

private:
    int ataque;
    int defensa;

public:
    Personaje(int ataque, int defensa);
    void mostrarDatos();
};

Personaje::Personaje(int ataque, int defensa)
{
    this->ataque = ataque;
    this->defensa = defensa;
}

void Personaje::mostrarDatos()
{
    cout << "Ataque " << ataque << endl;
    cout << "Defensa " << defensa << endl;
}