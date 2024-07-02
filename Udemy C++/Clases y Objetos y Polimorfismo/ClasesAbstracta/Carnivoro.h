#include "Animal.h"
#include <iostream>
using namespace std;
class Carnivoro : Animal
{
private:
    /* data */
public:
    void alimentarse()
    {
        cout << "Carne" << endl;
    }
};
