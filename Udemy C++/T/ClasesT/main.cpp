#include <iostream>
#include "claset.h"
using namespace std;

int main(int argc, char const *argv[])
{
    claset<int, float> ob1(5, 6);
    ob1.setDato(5);

    claset<int, float> *objeto = new claset<int, float>(5, 6.95);
    objeto->setDato(10);
    /* code */
    return 0;
}
