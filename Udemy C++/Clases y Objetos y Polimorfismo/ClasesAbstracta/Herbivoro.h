#include "Animal.h"
#include <iostream>
using namespace std;
class Herbivoro : Animal
{
private:
    /* data */
public:
    void alimentarse()
    {
        cout << "Plantas" << endl;
    }
};
