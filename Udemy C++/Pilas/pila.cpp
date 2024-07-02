#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void pop(Nodo *&pila,int n){
    Nodo *aux = pila;
    n = aux ->dato;
    pila = aux->siguiente;
    delete aux;
    cout<<"Dato eliminado: "<<n<<endl;
}

void add(Nodo *&pila,int dato){
    Nodo *new_node = new Nodo();
    new_node->dato =dato;
    new_node->siguiente = pila;
    pila = new_node;
    cout<<"Agregado: "<<dato<<endl;
}

int main(int argc, char const *argv[]){
    Nodo * pila = NULL;
    int op;
    int cont = 0;
    do{
        cout<<"Seleccione que desea hacer: "<<"\n 1.-Agregar \n 2.-Quitar \n 3.-Salir"<<endl;
        cin>>op;
        switch (op){
        case 1: 
            add(pila,5);
            cont++;
             break;
        case 2: 
            if(cont!=0){
                pop(pila,5);
                cont --;
            }else{
                cout<<"No hay datos que eliminar"<<endl;
            }
            break;
        case 3: 
            cout<<"Adios putoss"<<endl;
        break;
        }
    } while (op!=3);
}

