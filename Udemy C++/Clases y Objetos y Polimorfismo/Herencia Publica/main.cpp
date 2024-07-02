#include <iostream>
#include "Turismo.h"
#include "String.h"
#include "string.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Turismo* t1 = new Turismo("Toyota","Rojo","2009",4);

    cout<<t1->getColor()<<endl;
    t1->setColor("Azul");
    cout<< t1->getColor() << endl;
    cout << t1->dameModelo() << endl;

     return 0;
}
