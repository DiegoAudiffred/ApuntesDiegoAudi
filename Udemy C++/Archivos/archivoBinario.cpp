#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "string.h"
using namespace std;

struct registro
{
char name[30];
char last[20];
};


void escribir(){
    ofstream archivo;
    archivo.open("Pruebas.dat",ios::out | ios::binary);
    
    if (archivo.fail()){
        cout<<"No se pudo abir el archivo"<<endl;
        exit(1);
    }

    registro persona;
    cout<<"Nombre: "<<endl;
    cin.getline(persona.name,20,'\n');
    cout<<"Apellido"<<endl;
    cin.getline(persona.last,20,'\n');

    archivo.write((char *)&persona,sizeof(registro));

  archivo.close();
}

void leer(){
    ifstream archivo;
    
  archivo.open("Pruebas.dat",ios::in | ios::binary);
       if (archivo.fail()){
        cout<<"No se pudo abir el archivo"<<endl;
        exit(1);
    }

    registro persona;
    archivo.read((char *)&persona,sizeof(registro));
  
        cout<<"Nombre: "<<persona.name<<endl;
        
        cout<<"Apellido: "<<persona.last<<endl;

        archivo.close();
    }


int main(int argc, char const *argv[]){
 // escribir();
  leer();
}
