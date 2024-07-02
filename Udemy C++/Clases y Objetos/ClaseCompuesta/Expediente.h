#include <iostream>
using namespace std;
#include "string.h"
class Expediente
{
private:
    int nmEx;

public:
    Expediente(int nmEx);
    int getExp();
};
Expediente::Expediente(int nmEx)
{
    this->nmEx = nmEx;
}

int Expediente::getExp()
{
    return nmEx;
}