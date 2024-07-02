#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void dele(Nodo *lista,int n){
   if (lista!=NULL){
        Nodo *aux;
        aux = lista;
        Nodo *aux2=NULL;
            while ((aux!=NULL) && (aux->dato!=n)){
                 aux2=aux;
                 aux = aux->siguiente;
             } 
                    if (aux==NULL){
                        cout<<"No hay elemento"<<endl;
                    }else if(aux2==NULL){
                        lista= lista->siguiente;
                        delete aux;
                    }else{
                         aux2->siguiente = aux->siguiente;
                        delete aux;
                    }
   }


}

void getDato(Nodo *lista,int dato){
    Nodo *aux = new Nodo();
    aux = lista;
    bool find=false;
    int b=0;
    while(aux!=NULL){
        if(aux->dato==dato){
            cout<<"Pos del valor: "<<b+1<<endl;
            find = true;
        }
        aux= aux ->siguiente;
         b++;
    }
    if(!find)
        cout<<"No se encontro el valor"<<endl;
}


void mostrarLista(Nodo *lista){
    Nodo *actual=new Nodo();
    actual=lista;
    while(actual!=NULL){
        cout<<actual->dato<<" --> ";
        actual=actual->siguiente;
    }
    cout<<"NULL"<<endl;
}

void insertar(Nodo *&lista,int dato){
    Nodo *new_node = new Nodo();
    new_node ->dato= dato;
    Nodo *aux1 = lista;
    Nodo *aux2;
    while ((aux1 != NULL) && (aux1 -> dato < dato)){
        aux2=aux1;
        aux1=aux1->siguiente;
    }    

    if (lista == aux1){
        lista = new_node;
    }else{
        aux2->siguiente = new_node;    
    }
    
    new_node ->siguiente = aux1;
}


int main(int argc, char const *argv[]){
    Nodo * lista = NULL;
    int op;
    int a;
    do{
        cout<<"Seleccione que desea hacer: "<<"\n 1.-Agregar \n 2.-Ver \n 3.-Salir \n 4.-Buscar valor \n 5.-Borrar"<<endl;
        cin>>op;
        switch (op){
        case 1: 
        cout<<"Dame un valor"<<endl;
        cin>>a;
            insertar(lista,a);
             break;
        case 2: 
             mostrarLista(lista);
            break;
        case 3: 
            cout<<"Adios putoss"<<endl;
        break;
        case 4:
            cout<<"Dame un valor a buscar"<<endl;
            cin>>a;
            getDato(lista,a);
        break;
        case 5:
        cout<<"Dame un valor a eliminar"<<endl;
        cin>>a;
        dele(lista,a);
        break;
        default:    cout<<"Opcion no valida"<<endl;
            break;
        }
    } while (op!=3);
}




 