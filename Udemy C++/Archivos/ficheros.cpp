#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "string.h"
using namespace std;

void escribir(){
    ofstream archivo;
    string nombre,text;
    cout<<"Dame el nombre"<<endl;
    getline(cin,nombre);
    archivo.open(nombre.c_str(),ios::out);//Abriendo el archivo en la carpeta base
    //archivo.open("prueba.txt",ios::out);//Abriendo el archivo en la carpeta base
    //archivo.open("C://Users//D1360//Documents//prueba.txt",ios::out);//Abriendo el archivo con una direccion

    if (archivo.fail()){
        cout<<"No se pudo abir el archivo"<<endl;
        exit(1);
    }
        cout<<"Contexto"<<endl;

    getline(cin,text); //Strings
 //   cin.getline(text,tam,'\n'); Chars

   archivo<<"hOLA QUE TAL puta \n";
   archivo<<"Sexo anal \n";
   archivo<<text;
   archivo.close();
    
}

void aniadir(){
    ofstream archivo; 
    archivo.open("Lista.txt",ios::app);//Abriendo el archivo en la carpeta base
    //archivo.open("prueba.txt",ios::out);//Abriendo el archivo en la carpeta base
    //archivo.open("C://Users//D1360//Documents//prueba.txt",ios::out);//Abriendo el archivo con una direccion

    if (archivo.fail()){
        cout<<"No se pudo abir el archivo"<<endl;
        exit(1);
    }


   archivo<<"Queso con arroz \n";

   archivo.close();
}

void lectura(){
    ifstream archivo;
    string texto;
  //  archivo.open("Lista.txt",ios::in);//Abriendo archivo
    archivo.open("C://Users//D1360//Documents//Prueba.txt",ios::in);
       if (archivo.fail()){
        cout<<"No se pudo abir el archivo"<<endl;
        exit(1);
    }

    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;
    }

}


int main(int argc, char const *argv[]){
   //escribir();
   //lectura();
   aniadir();
}
