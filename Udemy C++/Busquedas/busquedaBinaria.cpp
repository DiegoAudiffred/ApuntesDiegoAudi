#include<iostream>
#include <stdlib.h>
#include "time.h"
//#include <bits/stdc++.h>

using namespace std;
void leerarray(int n,int a[]){ 

    for(int i=0;i<n;i++){
        a[i]=1+rand()%(9);
        cout<<a[i]<<endl;
    }
}

void sort(int n,int a[]){ 
int i, j,aux;
    for (i = 0; i < n - 1; i++){
        
        for (j = 0; j < n - i - 1; j++){
             if (a[j] > a[j + 1]){
                aux = a[j];
                a[j]=a[j+1];
                a[j+1]=aux;
             }
        }
    }
}


int main(){
    int n;
    cout<<"Dame el numero de elementos"<<endl;
    cin>>n;
    int dato;
    int numeros[n];
    srand(time(NULL));
    leerarray(n,numeros);
    sort(n,numeros);
    cout<<"Que numero desea buscar"<<endl;
    cin>>dato;
    int inf,sup,mitad;
    char band = 'F';


    inf =0;
    sup=n;
    
    while(inf<=sup){
        mitad =(inf+sup)/2;
            if(numeros[mitad]==dato){
                band = 'V';
                break;
            }
            if(numeros[mitad]>dato){
                sup = mitad;
                mitad = (inf+sup)/2;
            }
            if(numeros[mitad]<dato){
                inf = mitad;
                mitad = (inf+sup)/2;
            }
    }

    if(band == 'V'){
        cout<<"El numero fue encontrado en la posicion "<<mitad+1<<endl;   
    }else{
        cout<<"El numero no fue encontrado"<<endl;
    }

}
   