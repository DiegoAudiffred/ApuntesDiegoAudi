#include <iostream>
using namespace std;

struct persona
{
    string nombre;
    int edad;
}
persona1={"Ale",20},persona2={"Audi",22};


struct notas{
    int nota1;
    int nota2;
};

struct Corredor{
    int edad;
    string nombre;
    struct notas notes;

}corredor1;


int main(){
    persona pers;
    pers.edad=30;
    pers.nombre="Mariano";

   corredor1.notes.nota1= 10;
   corredor1.notes.nota2= 20; 
 int a =  corredor1.notes.nota2;
    cout<<a<<endl;
}