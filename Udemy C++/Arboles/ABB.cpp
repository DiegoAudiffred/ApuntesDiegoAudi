#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo * izq;
    Nodo * der;
};

Nodo *arbol = NULL;

Nodo *obtenerSucesor(Nodo *arbol)
{
    Nodo *actual = arbol;
    while (actual->izq != NULL)
    {
        actual = actual->izq;
    }
    return actual;
}

Nodo *eliminarNodo(Nodo *arbol, int dato)
{
    if (arbol == NULL)
    {
        return arbol;
    }

    if (dato < arbol->dato)
    {
        arbol->izq = eliminarNodo(arbol->izq, dato);
    }
    else if (dato > arbol->dato)
    {
        arbol->der = eliminarNodo(arbol->der, dato);
    }
    else
    {
        // Caso 1: El nodo a eliminar es una hoja (no tiene hijos)
        if (arbol->izq == NULL && arbol->der == NULL)
        {
            delete arbol;
            arbol = NULL;
        }
        // Caso 2: El nodo a eliminar tiene solo un hijo
        else if (arbol->izq == NULL)
        {
            Nodo *temp = arbol;
            arbol = arbol->der;
            delete temp;
        }
        else if (arbol->der == NULL)
        {
            Nodo *temp = arbol;
            arbol = arbol->izq;
            delete temp;
        }
        // Caso 3: El nodo a eliminar tiene dos hijos
        else
        {
            Nodo *sucesor = obtenerSucesor(arbol->der);
            arbol->dato = sucesor->dato;
            arbol->der = eliminarNodo(arbol->der, sucesor->dato);
        }
    }

    return arbol;
}




void preOrden(Nodo *&arbol){
    if (arbol == NULL)
    {
        return;
    }
    else
    {
      cout<<arbol->dato<<"  -  ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
    cout<<endl;
}

void InOrden(Nodo *&arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {

        InOrden(arbol->izq);
        cout << arbol->dato << "  -  ";
        InOrden(arbol->der);
    }
  
}

void postOrder(Nodo *&arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {

        postOrder(arbol->izq);
        postOrder(arbol->der);
        cout << arbol->dato << "  -  ";
      
    }
}

void mostrar(Nodo *&arbol, int cont)
{
    if (arbol== NULL){
        return;
    }else{
        mostrar(arbol->der,cont+1);
        for (int i = 0; i < cont; i++) {
            cout<<"   ";
        }
        cout<<arbol->dato<<endl;
        mostrar(arbol->izq,cont+1);
        
    }
}

Nodo *crearNodo(int dato){
    Nodo *new_node = new Nodo();
    new_node->dato=dato;
    new_node->der=NULL;
    new_node->izq=NULL;

    return new_node;
}

void insertarNodo(Nodo *&arbol,int dato){
    if(arbol==NULL){
        Nodo *nod = crearNodo(dato);
        arbol = nod;
    }else{
        int val = arbol->dato;
            if(dato < val){
                insertarNodo(arbol->izq,dato);
            }else{
                insertarNodo(arbol->der,dato);
            }
    }   

}

bool busqueda(Nodo *&arbol, int n){
    if (arbol==NULL){
        return false;
    }else if (arbol->dato==n){
        return true;
    }else if(n<arbol->dato){
        return busqueda(arbol->izq,n);
    }else{
        return busqueda(arbol->der,n);
    }
}

    int main(int argc, char const *argv[])
{
    int op;
    int val;
    int cont=0;
    do{
        cout << "Ingrese una de las opciones \n 1.-Insertar Nodo \n 2.-Salir \n 3.-Imprimir arbol \n 4.-Buscar dato \n 5.-PreOrder \n 6.-InOrder \n 7.-PostOrder \n 8.-EliminarNodo" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
                cout << "Dame el valor a insertar" << endl;
                cin >> val;
                insertarNodo(arbol, val);
                break;
        case 2:
                cout << "Hasta la vista pto" << endl;
                break;
        case 3:
                cout << "Mostrasndo arbol" << endl;
                mostrar(arbol, cont);
                cout << "\n";
                break;
        case 4:
                cout << "Dame el num a buscar" << endl;
                cin >> val;

                if (busqueda(arbol, val))
                {
                    cout << "Si existe" << endl;
                }
                else
                {
                    cout << "No existe" << endl;
                }
                break;
        case 5:
                preOrden(arbol);
                break;
        case 6:
                InOrden(arbol);
                break;
        case 7:
                postOrder(arbol);
                break;
        case 8:
                cout << "Dame el num a eliminar" << endl;
                cin >> val;
                eliminarNodo(arbol,val);
        default : break;
         }
    } while (op!=2);
}
