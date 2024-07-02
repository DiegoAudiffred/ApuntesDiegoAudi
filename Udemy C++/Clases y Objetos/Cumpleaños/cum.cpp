#include <iostream>
#include "dias.h"

using namespace std;



int main(int argc, char const *argv[]){

    dias *hoy;
    dias *cumple;

    hoy = new  dias(1,2);
    cumple = new dias(2,2);
    
    hoy->ver();
    cumple->ver();

    if(cumple->comparar(*hoy)){
         cout<<"Si es tu cumple puñetas"<<endl;
    }else{
        cout<<"No es tu cumple puñetas"<<endl;
    }

    }
