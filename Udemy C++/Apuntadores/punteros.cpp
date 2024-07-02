#include <iostream>
#include <stdlib.h>
#include "string.h"
using namespace std;

struct Persona{
  char nombre[30];
  int edad;
}persona,*ppersona = &persona;

int mayor(int *,int);
void intercambio(float *,float * );
int contandoVocales(char *);
void mostrarM(int **,int,int);
void mostrarD(Persona *);


int main(){
///////////////////////////////////////////////////////////////////////////
/*  uso del puntero
int num = 20;
int *dirnum;
dirnum=&num;

cout<<"Numero = "<<num<<endl;
cout<<"Dir de memoria = "<<&num<<endl;
cout<<"Numero = "<<*dirnum<<endl;
cout<<"Dir de memoria = "<<dirnum<<endl;

if(*dirnum%2==0){
  cout<<"Numero es par"<<endl;
  cout<<"Direccion de memoria"<<dirnum<<endl;
}else{
   cout<<"Numero es impar"<<endl;
  cout<<"Direccion de memoria"<<dirnum<<endl;
}*
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

/*  Arreglos
  int numa[5]={3,6,9,12,15};
  int * dir;
  dir = numa;
    for (int i = 0; i < 5 ; i++)
    {
      cout<<*dir++<<endl;
      cout<<dir++<<endl;
    }
 cin.clear();
 fflush(stdin); */
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
/* Numeros pares
    int asd[10];  
    int *direc;
    direc=asd;

    for(int i=0;i<10;i++){
      cout<<"Digite "<<i+1<<endl;
      cin>>asd[i];
    }

    direc=asd;

    for(int i=0;i<10;i++){
      if(*direc%2==0){
        cout<<"Su numero es par "<<*direc<<endl;
      }
         direc++;
    }

 cin.clear(); 
 fflush(stdin); */
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
/*  Numero menor
    int asd2[10];
    int *direc2;
    direc2=asd2;

    for(int i=0;i<10;i++){
      cout<<"Digite "<<i+1<<endl;
      cin>>asd2[i];
    }

int menor = 10000000;

for(int i=0;i<10;i++){
      if(*direc2<0){
        cout<<"Nuevo Numero menor"<<*direc<<endl;
        menor = *direc2;
      }
         direc2++;
    }*/
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

/*areglo dinamico
  int ncalif,*calif;  
  ncalif=3;
  calif = new int[ncalif];   
  for (int i = 0; i < ncalif; i++){
    cout<<"DAME UNA CALIFICACION"<<endl;
    cin>>calif[i];
  }
   for (int i = 0; i < ncalif; i++){
    cout<<calif[i];
  }*/
///////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////// 
/* Cambiar variables y metodo recibe direccionesde memoria
  float num=1.8;
  float num2=7.68;

  cout<<num<<endl;
  cout<<num2<<endl;
  intercambio(&num,&num2);
  cout<<num<<endl;
  cout<<num2<<endl;
}

void intercambio(float *dir1,float *dir2 ){
  float aux;
  aux  = *dir1;
  *dir1=*dir2;
  *dir2=aux;*/
 ///////////////////////////////////////////////////////////////////////////
 ///////////////////////////////////////////////////////////////////////////
 /*Obteniendo el mayor
 int num = 5;
 int numeros[5]={1,2,3,4,5};
 cout<<"El mayor es "<< mayor(numeros,num) << endl;
}

int mayor(int *dir,int tam){
  int max=0;
     for (int i = 0; i < tam; i++)
     {
      if(*(dir+i)>max){
        max = *(dir+i);
      }
    
     
return max;*/
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
/*Contar vocales
char nombre[30];

cout<<"Dame tu nombre"<<endl;
cin.getline(nombre,30,'\n');
strupr(nombre);
cout<<"Numero de vocales "<<contandoVocales(nombre)<<endl;;
  
}

int contandoVocales(char * nombre){
    int cont = 0;
  while(*nombre){
      switch (*nombre){
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U': 
        cont++;
      }
      nombre++;
  }
  return cont;

}*/
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

/*Matrices dinamicas
int **puntero;
int fil,col;
cout<<"Filas: "<<endl;
cin>>fil;
cout<<"Columnas: "<<endl;
cin>>col;

puntero = new int*[fil];  //Memoria filas
for (int i = 0; i < fil; i++)
{
  puntero[i]= new int[col]; //Memoria columnas
}

cout<<"Llenando matrix"<<endl;
for (int i = 0; i < fil; i++){
  for (int j = 0; j < col; j++){ 
    cout<<"F: "<<i<<"C: "<<j<<endl;
    cin>>*(*(puntero+i)+j);
  }
}
  mostrarM(puntero,fil,col);
  for (int i = 0; i < fil; i++) //Liberar memoria
  {
      delete[] puntero[i];
  }
    delete[] puntero;

}

void mostrarM(int **pmatrix,int fil,int col){

  for (int i = 0; i < fil; i++){
  for (int j = 0; j < col; j++){ 
    cout<<*(*(pmatrix+i)+j);
  }
  cout<<endl;
}
}*/
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
/*Estructuras y punteros
cout<<"Nombre culero"<<endl;
cin.getline(ppersona->nombre,30,'\n');
cout<<"Edad culera"<<endl;
cin>>ppersona->edad;
mostrarD(ppersona);
}

void mostrarD(Persona *pp){

cout<<"Name: "<<pp->nombre<<endl;
cout<<"Age: "<<pp->edad<<endl;

}*/
}
