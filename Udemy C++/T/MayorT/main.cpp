#include <iostream>
using namespace std;
template <class T, typename T2>

T2 mayor(T dato1, T2 dato2)
{
    if (dato1 > dato1)
        return dato1;
    else
        return dato2;
}

int main()
{
    cout << "El mayor es " << mayor(5, 8.5);
    cout << "El mayor es " << mayor(6.7, 9.9);
    cout << "El mayor es " << mayor('a', 'z');

    return 0;
}