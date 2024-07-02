#include <iostream>
using namespace std;
#include "Triangulo.h"


int main(int argc, char const *argv[])
{
    Triangulo* t1 = new Triangulo(3,5,6,7);
    cout<<t1->getNlados()<<endl;
    cout << t1->areaTriangulo() << endl;

    /* code */
    return 0;
}
