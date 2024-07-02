#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};



bool colaVacia(Nodo *frente){
return (frente == NULL)? true:false;
}

void eliminar(Nodo *&frente,Nodo *&fin,int &n){
    n=frente->dato;
    Nodo *aux = frente;
    if(frente == fin){
        frente = NULL;
        fin = NULL;
    }else{
        frente= frente -> siguiente;
    }
    delete aux;
    
}

void insertar(Nodo *&frente,Nodo *&fin,int n){
    Nodo *new_node = new Nodo();
    new_node->dato = n;
    new_node->siguiente = NULL; 

if(colaVacia(frente)){
    frente = new_node;
}else{
fin ->siguiente = new_node;
}
fin=new_node;
}


int main(int argc, char const *argv[]){
   Nodo *frente = NULL;
   Nodo *fin = NULL;
   int dato;
    int opcion;
   do{
       cout<<"\n\nWelcome to the bank wanna add or join lo the queue"<<endl;
       cout<<"For add press 1"<<endl;
        cout<<"For quit press 2"<<endl;
        cout<<"For leave press 0"<<endl;
        cin>>opcion;

        switch (opcion){
        case 1:
        cout<<"Dato: "<<endl;
            cin>>dato;
            insertar(frente,fin,dato);
            cout<<"Agregando: "<<dato<<endl;
        break;
        case 2:
            eliminar(frente,fin,dato);
            cout<<"Eliminado: "<<dato<<endl;
        break;
        default:
        cout<<"BYE BYE"<<endl;
            break;
        }

   }while (opcion!=0);
  
   
   

}

