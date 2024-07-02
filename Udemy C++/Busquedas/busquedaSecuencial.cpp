#include<iostream>
#include <stdlib.h>
#include "math.h"
#include <random>
#include <time.h>

using namespace std;
void leerarray(int n,int a[]){ 

    for(int i=0;i<n;i++){
        
        //a[i]=rand() % 10; // hasta numero 0 a 9
        a[i]=1+rand()%(9);
        cout<<a[i]<<endl;
    }
}

void posiciones(int n,int  tam, int a[]){
    for (int i = 0; i < tam; i++){
         if(n==a[i]){
            cout<<"Encontrado en la posicion "<< i+1<< endl; 
        }
    }
}

void cantidad(int n,int  tam, int a[]){
    int con=0;
    for (int i = 0; i < tam; i++){
         if(n==a[i]){
         con++;
        }
    }
    cout<<"Fue encontrado "<<con<<" veces"<<endl;
    
}

void buscasecuencial(int n,int a[],int ele){
    bool esta = false;
    for(int i=0;i<n;i++){
        if(ele==a[i]){
            cout<<"Elemento encontrado"<<endl;
            cantidad(ele,n,a);
            posiciones(ele,n,a);
            esta = true;
            break;
        }
    }   
    if (!esta){
        cout<<"No existe ese  elemento "<<endl;
    }
}




int main(){
    int elem,n;

    cout<<"Ingrese limite del arreglo"<<endl;
    cin>>n;

    int x[n];
    srand(time(NULL));
    leerarray(n,x);

    cout<<"Ingrese elemento a buscar "<<endl;
        cin>>elem;
    buscasecuencial(n,x,elem);
       
}
