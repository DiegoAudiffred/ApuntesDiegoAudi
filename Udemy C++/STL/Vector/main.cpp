#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> numeros;

    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(15);
    numeros.push_back(20);
    numeros.push_back(25);
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << endl;
    }
    // numeros[2] = 30;
    //  numeros.pop_back();
    //  numeros.erase(numeros.begin(), numeros.begin() + 3);

    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << endl;
    }
    /* vector<int> numeros(5); //Vector estatico
     numeros[0] = 1;

     for (int i = 0; i < numeros.size(); i++)
     {
         cout << numeros[i] << endl;
     }*/

    return 0;
}
