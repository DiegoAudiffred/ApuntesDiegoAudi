#include <iostream>
using namespace std;

class dias
{
private:
    int dia, mes;

public:
    dias(int dia, int mes);
    bool comparar(dias &dia);
    void ver();
};

dias::dias(int a, int b)
{
    this->dia = a;
    this->mes = b;
}

bool dias::comparar(dias &dia)
{
    if (dia.dia == this->dia && dia.mes == this->mes)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void dias::ver()
{
    cout << "Dia: " << dia << endl;
    cout << "Mes: " << mes << endl;
}
