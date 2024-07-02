#include <iostream>
#include "claseBase.h"
using namespace std;

class claseDerivada : public claseBase
{
private:
    /* data */
    int numero2;

public:
    claseDerivada(int numero, int numero2 /* args */) : claseBase(numero)
    {
        this->numero2 = numero2;
        cout << "Constructor derivada" << endl;
    }
    ~claseDerivada()
    {
        cout << "Destructor derivada" << endl;
    }
};
