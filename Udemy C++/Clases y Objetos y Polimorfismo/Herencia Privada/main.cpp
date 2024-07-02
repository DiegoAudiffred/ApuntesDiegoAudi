#include <iostream>
#include "Turismo.h"
#include "String.h"
#include "string.h"
#include "Deportivo.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Turismo* t1 = new Turismo("Toyota","Rojo","2009",4);

    cout<<t1->getColor()<<endl;
    t1->setColor("Azul");
    cout<< t1->getColor() << endl;
    cout << t1->dameModelo() << endl;

    Deportivo *t2 = new Deportivo("Audi", "Azul", "2010", 8);

    cout<<t2->getCilindradas()<<endl;

    cout << t2->reportarMarca() << endl;
    return 0;
}
