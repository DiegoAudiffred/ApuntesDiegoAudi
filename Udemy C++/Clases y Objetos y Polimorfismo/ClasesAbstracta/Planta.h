#include "SerVivo.h"
#include <iostream>
using namespace std;
class Planta : SerVivo
{
private:
    /* data */
public:
    void alimentarse()
    {
        cout << "Fotosintesis" << endl;
    }
};
