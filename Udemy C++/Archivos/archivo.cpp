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
    archivo.open("pos.txt",ios::out);
    
    if (archivo.fail()){
        cout<<"No se pudo abir el archivo"<<endl;
        exit(1);
    }
    cout<<"Posicion del archivo: "<<archivo.tellp()<<endl;
  // archivo<<"Hola"<<endl;
   // archivo.seekp(3);
    archivo<<"Hola como estas?"<<endl;
       cout<<"Posicion del archivo: "<<archivo.tellp()<<endl;


  archivo.close();
}

void leer(){
    ifstream archivo;
    
  archivo.open("pos.txt",ios::in);
       if (archivo.fail()){
        cout<<"No se pudo abir el archivo"<<endl;
        exit(1);
    }

    string linea;
    archivo.seekg(5);
        cout<<"Posicion del archivo: "<<archivo.tellg()<<endl;

    getline(archivo,linea);
    cout<<linea<<endl;
        archivo.close();
    }


int main(int argc, char const *argv[]){
    escribir();
    leer();
}
