#include <iostream>
using namespace std;
#include "claseDerivada.h"

int main(int argc, char const *argv[])
{
    /* code */
    claseDerivada *ob1 = new claseDerivada(5, 10);

    delete ob1;
    return 0;
}
