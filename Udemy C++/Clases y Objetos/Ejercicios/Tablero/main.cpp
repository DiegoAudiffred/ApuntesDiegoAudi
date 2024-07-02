#include <iostream>
#include "Tablero.h"
using namespace std;
int main(int argc, char const *argv[])
{
    Tablero *tab = new Tablero(0, 0);
    cout << tab->getX() << " , " << tab->getY() << endl;
    tab->mvArriba(5);
    cout << tab->getX() << " , " << tab->getY() << endl;

    return 0;
}
