
#include "Carnivoro.h"
#include "Herbivoro.h"
#include "Planta.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    Planta *p1 = new Planta();
    p1->alimentarse();

    Carnivoro *p2 = new Carnivoro();
    p2->alimentarse();
    return 0;

    Herbivoro *p3 = new Herbivoro();
    p3->alimentarse();
    return 0;
}
