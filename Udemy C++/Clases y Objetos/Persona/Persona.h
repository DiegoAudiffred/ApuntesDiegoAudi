#include <iostream>
#include "string.h"
using namespace std;

class Persona{
    private:
        int edad;
        string nombre;
        int dni;
    public:
    Persona(string _nombre,int _edad);
    Persona(int _dni);
    Persona();
    void llenar();
    void Mostar();
    ~Persona(){
        
    }
};

Persona::~Persona(){

}

Persona::Persona(string _nombre,int _edad){
    this->nombre= _nombre;
    this->edad= _edad;
    this->dni= NULL;
}


Persona::Persona(int _dni){
       this->nombre = "";
    this->edad= NULL;
    this->dni= _dni;
 
}


Persona::Persona(){

}





void Persona::llenar(){
     edad=18;
  nombre = "Audi";
      dni=1212;
}

void Persona::Mostar(){
    cout<<"El nombre es "<<nombre << " edad " << edad << " dni " << dni <<endl;
}



