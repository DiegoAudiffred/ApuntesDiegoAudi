#include <iostream>
#include "Figura.h"
#include <math.h>
using namespace std;

class Triangulo : public Figura{
    private:
        float l1,l2,l3;
    public:
        Triangulo(int nlados, float l1, float l2, float l3) : Figura(nlados){
            this->l1 = l1; 
            this->l2 = l2; 
            this->l3 = l3;
        }

        float areaTriangulo(){
            float p = (l1+l2+l3)/2;
            float area= sqrt(p*(p-l1)*(p-l2)*(p-l3));
            return area;
        }
};