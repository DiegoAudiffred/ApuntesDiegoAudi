#include <iostream>
using namespace std;
template <class T>

void mayor(T &dato1, T &dato2)
{
    T aux;
    aux = dato1;
    dato1 = dato2;
    dato2 = aux;
    cout << dato1 << dato2 << endl;
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    mayor(a, b);
    cout << a << b << endl;
    return 0;
}